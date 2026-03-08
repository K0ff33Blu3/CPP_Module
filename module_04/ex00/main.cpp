/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 15:53:30 by miricci           #+#    #+#             */
/*   Updated: 2026/03/07 08:16:17 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

// int	main( void ) {

// 	Animal	generic;
// 	Cat		tom;
// 	Dog		jerry;

// 	tom.makeSound();
// 	jerry.makeSound();
// 	generic.makeSound();

// 	WrongAnimal badGeneric;
// 	WrongCat	badCat;
	
// 	badGeneric.makeSound();
// 	badCat.makeSound();
	
// 	Cat		silvestro(tom);
// 	silvestro.makeSound();
// }

int main()
{
	const Animal* meta = new Animal();
	Animal* i = new Cat();
	const Animal* j = new Dog();
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	Animal k(*i);
	Animal	l;
	l = *j;
	std::cout << k.getType() << " " << std::endl;
	k.makeSound(); //will output the cat sound!
	std::cout << l.getType() << " " << std::endl;
	l.makeSound();
	k.setType("dog");
	std::cout << i->getType() << " " << std::endl;
	delete meta;
	delete i;
	delete j;
	
	const WrongAnimal* a = new WrongCat();
	a->makeSound();
		
	return 0;
}