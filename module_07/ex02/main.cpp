/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 14:44:11 by miricci           #+#    #+#             */
/*   Updated: 2026/04/05 09:43:25 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>


int		main( void ) {
	Array<int>			int_array_def;
	Array<std::string>	string_arr_def;
	Array<int>			int_arr(5);
	Array<std::string>	string_arr(4);
	Array<int const>	int_const_array_def;
	Array<int const>	int_const_array(3);
	Array<std::string const>	str_const_array(2);

	std::cout << "Costruttore di default array di stringhe" << std::endl;
	std::cout << string_arr_def << std::endl;
	std::cout << "\nCostruttore di default array di int" << std::endl;
	std::cout << int_array_def << std::endl;
	std::cout << "\nCostruttore con parametro int" << std::endl;
	std::cout << int_arr << std::endl;
	std::cout << "\nCostruttore con parametro str" << std::endl;
	std::cout << string_arr << std::endl;
	std::cout << "\nCostruttore const di default" << std::endl;
	std::cout << int_const_array << std::endl;
	std::cout << "\nCostruttore const con parametro int" << std::endl;
	std::cout << int_const_array << std::endl;
	std::cout << "\nCostruttore const con parametro str" << std::endl;
	std::cout << str_const_array << std::endl;
	std::cout << "\nAccesso con operator []" << std::endl;
	try {
		for (size_t i = 0; i < 7; i++) {
			int_arr[i] = 1 + i;
			std::cout << "int_arr[" << i << "]: " << int_arr[i] << std::endl;
		}
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	Array<int>			int_arr_copy(int_arr);
	for (size_t i = 0; i < 5; i++)
		int_arr[i]++;
	std::cout << "\nOriginale: int_arr[]: " << int_arr << std::endl;
	std::cout << "\nCopia: int_arr_copy[]: " << int_arr_copy << std::endl;
	return 0;
}