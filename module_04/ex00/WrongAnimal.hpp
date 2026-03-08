/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 15:45:26 by miricci           #+#    #+#             */
/*   Updated: 2026/03/07 08:13:51 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# define GRAY	"\033[90m"
# define RESET	"\033[0m"

# include <string>
# include <iostream>

class WrongAnimal
{
public:
	WrongAnimal( void );
	WrongAnimal( const WrongAnimal& other );
	WrongAnimal& operator=( const WrongAnimal& other );
	virtual ~WrongAnimal();
	
	void	makeSound() const;
};

#endif