/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 18:09:44 by miricci           #+#    #+#             */
/*   Updated: 2026/04/03 14:39:09 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#include <iostream>
#include <string>

void	printInt( int const & nbr ) {
	std::cout << nbr << std::endl;
}

void	printDbl( double const & nbr ) {
	std::cout << nbr << std::endl;
}

void	printStr( std::string const & str ) {
	std::cout << str << std::endl;
}

int	main( void ) {
	std::string	str_arr[3] = {"ciao", "come", "stai"};
	int	int_arr[5] = {3, 5, 8, 2, 6};
	double dbl_arr[4] = {4.5, 78.9, -1.4, -6.8};

	iter(str_arr, 3, printStr);
	iter(int_arr, 5, printInt);
	iter(dbl_arr, 4, printDbl);
	iter(str_arr, 3, printData<std::string>);

	std::string	const str_array[3] = {"ciao", "come", "stai"};
	int	const int_array[5] = {3, 5, 8, 2, 6};
	double const dbl_array[4] = {4.5, 78.9, -1.4, -6.8};

	iter(str_array, 3, printStr);
	iter(int_array, 5, printInt);
	iter(dbl_array, 4, printDbl);
	iter(dbl_array, 4, printData<double>);
}