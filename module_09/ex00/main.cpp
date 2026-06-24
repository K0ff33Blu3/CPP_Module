/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 10:21:44 by miricci           #+#    #+#             */
/*   Updated: 2026/06/13 17:45:50 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <exception>

int main(int argc, char** argv) {
	try
	{
		if (argc != 2)
			throw std::invalid_argument("Usage: ./btc <filename>");
		BitcoinExchange::initRates();
		BitcoinExchange::exchange(argv[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << "ERROR: " << e.what() << '\n';
		return 1;
	}
}