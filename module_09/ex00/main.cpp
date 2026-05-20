/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 10:21:44 by miricci           #+#    #+#             */
/*   Updated: 2026/05/20 10:54:05 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <exception>

int main(int argc, char** argv) {
	(void)argc;
	try
	{
		std::ifstream infile(argv[1]);
		if (!infile.is_open()) {
			throw std::runtime_error("could not open file.");
		}
		std::string line;
		while (std::getline(infile, line)) {
			
		}

	}
	catch(const std::exception& e)
	{
		std::cerr << "ERROR: " << e.what() << '\n';
	}
}