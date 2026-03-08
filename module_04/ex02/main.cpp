/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 15:53:30 by miricci           #+#    #+#             */
/*   Updated: 2026/03/08 09:15:20 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int	main( void ) {

	Animal*	animals[10];

	for (size_t i = 0; i < 10; i++) {
		
		if (i % 2 == 0)
			animals[i] = new Cat;
		else
			animals[i] = new Dog;
	}
	
	for (size_t i = 0; i < 10; i++)
		animals[i]->makeSound();
		
	// ANIMAL COPY VIA ASSIGNMENT OPERATOR -- NON VALID
	
	// Animal moreAnimals[10];

	// for (size_t i = 0; i < 10; i++) {
		
	// 	moreAnimals[i] = *animals[i];
	// }
	
	// for (size_t i = 0; i < 10; i++)
	// 	moreAnimals[i]->makeSound();
	
	// COPY CONSTRUCTOR PTR
	Animal* oneAnimal(animals[7]);
	oneAnimal->makeSound();
	
	oneAnimal->setType("dff");
	std::cout << oneAnimal->getType() << std::endl;
	std::cout << animals[7]->getType() << std::endl;

	// DEEP COPY VIA ASSIGNMENT OPERATOR OF A DOG
	Dog pluto;
	
	pluto = *static_cast<Dog*>(animals[1]);
	pluto.makeSound();
	pluto.setType("dss");
	std::cout << animals[1]->getType() << std::endl;
	
	// DEEP COPY VIA ASSIGNMENT OPERATOR OF A DOG
	Cat tom(*static_cast<Cat*>(animals[0]));
	tom.makeSound();
	tom.setType("dss");
	std::cout << animals[0]->getType() << std::endl;	
		
	for (size_t i = 0; i < 10; i++){
		
		delete animals[i];
	}
	
	return (0);
}