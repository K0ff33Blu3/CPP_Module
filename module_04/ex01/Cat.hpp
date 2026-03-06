/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 15:04:46 by miricci           #+#    #+#             */
/*   Updated: 2026/03/06 16:46:37 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain*	brain;
public:
	Cat( void );
	Cat( const Cat& other );
	Cat& operator=( const Cat& other );
	~Cat();
	
	void	makeSound() const;
};

#endif