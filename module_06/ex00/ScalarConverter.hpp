/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 11:42:10 by miricci           #+#    #+#             */
/*   Updated: 2026/04/01 13:34:44 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <sstream>
# include <string>
# include <limits>
# include <cmath>    // std::floor, std::isnan, std::isinf (C99-compat, disponibile in C++98)
# include <cerrno>
# include <climits>
# include <cfloat>

class ScalarConverter
{
	private:
		ScalarConverter( void );
		ScalarConverter( const ScalarConverter& other );
		ScalarConverter& operator=( const ScalarConverter& other );
		~ScalarConverter( void );

		enum eType { CHAR, INT, FLOAT, DOUBLE, UNKNOWN };

		static eType	detect( std::string& lit );
		static bool	isCharLit( std::string& lit );
		static bool	isIntLit( std::string& lit );
		static bool	isFloatLit( std::string& lit );
		static bool	isDoubleLit( std::string& lit );
		static void	printChar( double val, bool imp_nbr  );
		static void	printInt( double val, bool imp_nbr  );
		static void	printFloat( double val);
		static void	printDouble( double val );

		
	public:
		static void	convert( std::string &lit );
};

#endif