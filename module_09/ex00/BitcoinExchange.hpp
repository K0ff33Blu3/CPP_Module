/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 10:29:48 by miricci           #+#    #+#             */
/*   Updated: 2026/05/20 11:42:00 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <fstream>
#include <iostream>
#include <map>

class BitcoinExchange
{
	private:
		BitcoinExchange( void );
		BitcoinExchange( const BitcoinExchange& other );
		BitcoinExchange& operator=( const BitcoinExchange& other );
		~BitcoinExchange( void );

		static std::map<std::string, float>	exchangeRates;
		static std::map<std::string, float>	initRates();
	public:
		static void	exchange(std::map<std::string, float> const & inMap);
};

#endif