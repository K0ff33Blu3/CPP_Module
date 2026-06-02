/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 11:15:16 by miricci           #+#    #+#             */
/*   Updated: 2026/06/02 17:36:53 by miricci          ###   ########.fr       */
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

bool	BitcoinExchange::checkDate( std::string key ) {
	std::stringstream	ss(key);
	std::string			leftover;
	unsigned int	year, month, day;
	ss >> year; ss >> leftover;
	if (year < 2009 || year > 2022)
		return false;
	if (leftover[0] != '-')
		return false;
	ss.str(leftover.erase(0, 1)); leftover.clear();
	ss.clear(); ss.seekg(0);
	ss >> month; ss >> leftover;
	if (month > 12)
		return false;
	if (leftover[0] != '-')
		return false;
	ss.str(leftover.erase(0, 1)); leftover.clear();
	ss.clear(); ss.seekg(0);
	ss >> day; ss >> leftover;
	if (day > 31) {
		return false;
	}
	if (!leftover.empty()) {
		return false;
	}
	return true;
}

void	BitcoinExchange::exchange( std::string filename ) {
	std::ifstream infile(filename.c_str());
		if (!infile.is_open()) {
			throw std::runtime_error("could not open file.");
		}
		std::string line;
		std::map<std::string, float> inMap;
		while (std::getline(infile, line)) {
			size_t pipe_pos = line.find('|');
			std::string key, strValue;
			key = line.substr(0, pipe_pos);
			if (checkDate(key) == false)
				throw BadInputException();
			std::remove(key.begin(), key.end(), ' ');
			strValue = line.substr(pipe_pos + 1);
			std::istringstream iss(strValue);
			float fvalue;
			iss >> fvalue;
			if (fvalue < 0)
				throw NegativeValueException();
			else if (fvalue > 1000)
				throw NumberTooLargeException();
			inMap[key] = fvalue;
		}
	
	
	for (std::map<std::string, float>::iterator it = inMap.begin(); it != exchangeRates.end(); ++it) {
    	std::cout << it->first << " -> " << it->second << "\n";
	}
}

const char	*BitcoinExchange::NegativeValueException::what() const	throw()	{ return "not a positive number."; }

const char	*BitcoinExchange::NumberTooLargeException::what() const	throw()	{ return "too large a number."; }

const char	*BitcoinExchange::BadInputException::what()	const		throw()	{ return "bad input"; }