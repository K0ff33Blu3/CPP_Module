/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 11:55:33 by miricci           #+#    #+#             */
/*   Updated: 2026/04/22 20:38:38 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyFind.hpp"

#include <vector>
#include <list>
#include <stack>

int	main( void ) {

	std::cout << "\033[1;45m	====TEST CON VECTOR====	\033[0m" << std::endl;	
	std::vector<int> v(5, 34);
	std::cout << "\033[1;35m====vettore con elementi uguali====	\033[0m" << std::endl;
	// std::cout << v << std::endl;
	try
	{
		easyfind(v, 34);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		easyfind(v, 24);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\033[1;45m	====TEST CON LIST====	\033[0m" << std::endl;	
	std::list<int> l(5, 34);
	try
	{
		easyfind(l, 34);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		easyfind(l, 24);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

