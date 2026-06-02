/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 10:29:48 by miricci           #+#    #+#             */
/*   Updated: 2026/06/02 14:35:29 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <algorithm>

class BitcoinExchange
{
	private:
		BitcoinExchange( void );
		BitcoinExchange( const BitcoinExchange& other );
		BitcoinExchange& operator=( const BitcoinExchange& other );
		~BitcoinExchange( void );
		
		static std::map<std::string, float>	exchangeRates;
		static std::map<std::string, float>	initRates();
		
		static bool	checkDate( std::string key );
		
	class NegativeValueException : public std::exception
	{
		public:
			virtual const char	*what() const throw();
	};
	
	class NumberTooLargeException : public std::exception
	{
		public:
			virtual const char	*what() const throw();
	};
	
	class BadInputException : public std::exception
	{
		public:
			virtual const char	*what() const throw();
	};
	
	public:
		static void	exchange( std::string filename );
};

#endif