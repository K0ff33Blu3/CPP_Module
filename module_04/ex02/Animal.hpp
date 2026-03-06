/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 14:51:35 by miricci           #+#    #+#             */
/*   Updated: 2026/03/06 17:20:17 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# define GRAY	"\033[90m"
# define RESET	"\033[0m"

# include <string>
# include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal( void );
	Animal( const Animal& other );
	Animal& operator=( const Animal& other );
	virtual ~Animal();
	
	virtual void	makeSound( void ) const = 0;
	std::string		getType() const;
};


#endif