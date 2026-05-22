/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 11:15:16 by miricci           #+#    #+#             */
/*   Updated: 2026/05/22 16:25:34 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// FORMA CANONICA

BitcoinExchange::BitcoinExchange( void ) {
	for (std::map<std::string, float>::iterator it = exchangeRates.begin(); it != exchangeRates.end(); ++it) {
    std::cout << it->first << " -> " << it->second << "\n";
	}
}

BitcoinExchange::BitcoinExchange( BitcoinExchange const & other ) { (void)other; }

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
	std::map<std::string, float> btc_map;
	try
	{
		std::ifstream infile("data.csv");
		if (!infile.is_open()) {
			throw std::runtime_error("could not open file.");
		}
		std::string line;
		while (std::getline(infile, line)) {
			size_t comma_pos = line.find(',');
			std::string key, strvalue;
			key = line.substr(0, comma_pos);
			strvalue = line.substr(comma_pos + 1);
			std::istringstream iss(strvalue);
			float fvalue;
			iss >> fvalue;
			btc_map[key] = fvalue;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return btc_map;
}