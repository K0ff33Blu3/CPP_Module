/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 11:40:56 by miricci           #+#    #+#             */
/*   Updated: 2026/04/01 14:11:35 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main( int ac, char** av) {
	if (ac != 2) {std::clog << "Insert one argument" << std::endl; return 1;}
	std::string str = static_cast<std::string>(av[1]);
	ScalarConverter::convert(str);
	return 0;
}