/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 11:44:12 by miricci           #+#    #+#             */
/*   Updated: 2026/04/01 15:13:59 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// FORMA CANONICA ORTODOSSA

ScalarConverter::ScalarConverter( void ) {}

ScalarConverter::ScalarConverter( ScalarConverter const & other ) { (void)other; }

ScalarConverter& ScalarConverter::operator=( ScalarConverter const & other ) { (void)other; return *this; }

ScalarConverter::~ScalarConverter( void ) {}



// FUNZIONI PER RICONSOCERE IL TIPO

bool					ScalarConverter::isCharLit( std::string& lit ) {
	if (lit.length() == 3 && lit[0] == '\'' && lit[2] == '\'')
		return true;
	if (lit.length() == 1 && !isdigit(((unsigned char)lit[0])))
		return true;
	return false;	
}

bool					ScalarConverter::isIntLit( std::string& lit ) {
	std::istringstream	in(lit);
	int					inbr;
	char				leftover;
	return in >> inbr && !(in >> leftover);
}

bool					ScalarConverter::isFloatLit( std::string& lit ) {
	if (lit == "-inff" || lit == "+inff" || lit == "nanf" || lit == "inff")
		return true;
	if (lit.empty() || lit[lit.length() - 1] != 'f')
		return false;
	std::string trimmed = lit.substr(0, lit.length() - 1);
	std::istringstream	in(trimmed);
	float				fnbr;
	char				leftover;
	return	in >> fnbr && !(in >> leftover);
}

bool					ScalarConverter::isDoubleLit( std::string& lit ) {
	if (lit == "-inf" || lit == "+inf" || lit == "nan" || lit == "inff" || lit == "inf")
		return true;
	if (lit.empty() || !lit.find('.'))
		return false;
	std::istringstream	in(lit);
	double				dnbr;
	char				leftover;
	return	in >> dnbr && !(in >> leftover);
}

ScalarConverter::eType	ScalarConverter::detect( std::string& lit ) {
	if	(isCharLit(lit))		return CHAR;
	if	(isIntLit(lit))			return INT;
	if	(isFloatLit(lit))		return FLOAT;
	if	(isDoubleLit(lit))		return DOUBLE;
	else 						return UNKNOWN;
}


// FUNZIONI DI STAMPA

void					ScalarConverter::printChar( double val, bool imp_nbr ) {
	if (imp_nbr == true)							{std::cout << "char: impossible" << std::endl;		return ;}
	if (val < 0 || val > 127 || val != floor(val))	{std::cout << "char: impossible" << std::endl;		return ;}
	if (!isprint(static_cast<unsigned char>(val)))	{std::cout << "char: Non displayable" << std::endl;	return ;}
	std::cout << "char: " << static_cast<unsigned char>(val) << std::endl;
}

void					ScalarConverter::printInt( double val, bool imp_nbr ) {
	if (imp_nbr == true)						{std::cout << "int: impossible" << std::endl;	return ;}
	if (val < static_cast<double>(INT_MIN) 
		||	val > static_cast<double>(INT_MAX)
		||	val != floor(val))					{std::cout << "int: impossible" << std::endl;	return ;}
	std::cout << "int: " << static_cast<int>(val) << std::endl;
}

void					ScalarConverter::printFloat( double val ) {
	if (std::isnan(val))				{std::cout << "float: nanf" << std::endl;									return ;}
	if (std::isinf(val))				{std::cout << "float: " << (val > 0 ? "+" : "-") << "inff" << std::endl;	return ;}
	if (val < FLT_MIN || val > FLT_MAX)	{std::cout << "float: impossible" << std::endl;								return ;}
	float	f = static_cast<float>(val);
	std::cout << "float: " << f;
	if (!(val - std::floor(val)))
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

void					ScalarConverter::printDouble( double val ) {
	if (std::isnan(val))				{std::cout << "double: nan" << std::endl;									return ;}
	if (std::isinf(val))				{std::cout << "double: " << (val > 0 ? "+" : "-") << "inf" << std::endl;	return ;}
	if (val < DBL_MIN || val > DBL_MAX)	{std::cout << "double: impossible" << std::endl;							return ;}
	std::cout << "double: " << static_cast<double>(val);
	if (!(val - std::floor(val)))	std::cout << ".0";
	std::cout << std::endl;
}



// FUNZIONE CONVERT()

void					ScalarConverter::convert( std::string& lit ) {
	eType valueType = detect(lit);

	if (valueType == UNKNOWN) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;

		return ;
	}

	double	val = 0.0;
	bool	imp_nbr = false;

	switch (valueType)
	{
	case CHAR : {
		char	c = lit.length() == 3 ? lit[1] : lit[0];
		val = static_cast<double>(c);
		break ;
	}
	case INT : {
		std::istringstream iss(lit);
		int	i; iss >> i;
		val = static_cast<double>(i);
		break ;
	}
	case FLOAT : {
		if		(lit == "nanf")		{imp_nbr = true; val = std::numeric_limits<float>::quiet_NaN();}
		else if (lit == "-inff")	{imp_nbr = true; val = -std::numeric_limits<float>::infinity();}
		else if (lit == "+inff" || lit == "inff")	{imp_nbr = true; val = std::numeric_limits<float>::infinity();}
		else {
			std::istringstream iss(lit);
			float f; iss >> f;
			val = static_cast<double>(f);
		}
		break ;
	}
	case DOUBLE : {
		if 		(lit == "nan")		{imp_nbr = true; val = std::numeric_limits<double>::quiet_NaN();}
		else if (lit == "-inf")		{imp_nbr = true; val = -std::numeric_limits<double>::infinity();}
		else if (lit == "+inf" || lit == "inf")		{imp_nbr = true; val = std::numeric_limits<double>::infinity();}
		else {
			std::istringstream iss(lit);
			iss >> val;
		}
		break ;
	}
	default:
		break ;
	}

	printChar(val, imp_nbr);
	printInt(val, imp_nbr);
	printFloat(val);
	printDouble(val);
}