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
	(void)argc;
	try
	{
		BitcoinExchange::initRates();
	}
	catch(const std::exception& e)
	{
		std::cerr << "ERROR: " << e.what() << '\n';
	}
	BitcoinExchange::exchange(argv[1]);
}