/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 15:53:30 by miricci           #+#    #+#             */
/*   Updated: 2026/03/06 16:29:31 by miricci          ###   ########.fr       */
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
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	return 0;
}