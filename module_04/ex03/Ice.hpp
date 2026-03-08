/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 17:32:59 by miricci           #+#    #+#             */
/*   Updated: 2026/03/08 09:27:15 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice( void );
	Ice( const Ice& other );
	Ice& operator=( const Ice& other );
	~Ice();
	
	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif