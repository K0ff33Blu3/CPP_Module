/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 16:41:17 by miricci           #+#    #+#             */
/*   Updated: 2026/04/01 17:32:09 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <ctime>
#include <cstdlib>
#include <iostream>

Base *	generate( void ) {
	static bool	seeded = false;
	if (!seeded) {
		std::srand(std::time(NULL));
		seeded = true;
	}
	if (std::rand() % 3 == 0) { Base * res = new A; return res; }
	else if (std::rand() % 3 == 1) { Base * res = new B; return res; }
	else { Base * res = new C; return res; }
}

void	identify( Base * p ) {
	if		(dynamic_cast<A*>(p))	{ std::cout << "A" << std::endl; }
	else if (dynamic_cast<B*>(p))	{ std::cout << "B" << std::endl; }
	else if (dynamic_cast<C*>(p))	{ std::cout << "C" << std::endl; }
	else							{ std::clog << "Error" << std::endl; }
}

void	identify( Base& p ) {
	if		(dynamic_cast<A*>(&p))	{ std::cout << "A" << std::endl; }
	else if (dynamic_cast<B*>(&p))	{ std::cout << "B" << std::endl; }
	else if (dynamic_cast<C*>(&p))	{ std::cout << "C" << std::endl; }
	else							{ std::clog << "Error" << std::endl; }
}

int	main( void ) {
	Base *	b = generate();
	Base&	n = *b;
	std::cout << "Pointer class type: ";	identify(b);
	std::cout << "Reference class type: ";	identify(*b);
	std::cout << "Pointer class type: ";	identify(&n);
	std::cout << "Reference class type: ";	identify(n);
	delete b;
	return 0;
}