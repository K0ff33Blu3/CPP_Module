/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 15:53:30 by miricci           #+#    #+#             */
/*   Updated: 2026/03/07 08:46:45 by miricci          ###   ########.fr       */
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
	
	Animal moreAnimals[10];

	for (size_t i = 0; i < 10; i++) {
		
		moreAnimals[i] = *animals[i];
	}
	
	for (size_t i = 0; i < 10; i++)
		moreAnimals[i].makeSound();
	
	Animal* evenMoreAnimals[10];

	for (size_t i = 0; i < 10; i++) {
		
		evenMoreAnimals[i] = animals[i];
	}
	
	for (size_t i = 0; i < 10; i++)
		evenMoreAnimals[i]->makeSound();
		
	Animal oneAnimal(*animals[7]);
	oneAnimal.makeSound();
	
	oneAnimal.setType("dff");
	std::cout << oneAnimal.getType() << std::endl;
	std::cout << animals[7]->getType() << std::endl;
		
	for (size_t i = 0; i < 10; i++){
		
		delete animals[i];
	}
	
	return (0);
}