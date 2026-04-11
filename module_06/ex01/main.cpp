/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 15:22:00 by miricci           #+#    #+#             */
/*   Updated: 2026/04/01 16:25:21 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Serializer.hpp"
#include "Data.hpp"

int		main( void ) {
	Data	d(3,7);

	uintptr_t	ptr = Serializer::serialize(&d);
	std::cout << ptr << std::endl;
	std::cout << *(Serializer::deserialize(ptr)) << std::endl;
	return 0;
}