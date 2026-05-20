/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 11:15:16 by miricci           #+#    #+#             */
/*   Updated: 2026/05/20 11:49:40 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// FORMA CANONICA

BitcoinExchange::BitcoinExchange( void ) {}

BitcoinExchange::BitcoinExchange( BitcoinExchange const & other ) {}

BitcoinExchange& BitcoinExchange::operator=( BitcoinExchange const & other ) {
	if (this != &other) {
		exchangeRates = other.exchangeRates;
	}
	return *this;
}

BitcoinExchange::~BitcoinExchange( void ) {}

// INIZIALIZZAZIONE MAPPA

std::map<std::string, float> BitcoinExchange::exchangeRates = BitcoinExchange::initRates();

std::map<std::string, float> BitcoinExchange::initRates() {
	try
	{
		/* code */
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::ifstream infile("data.csv");
}