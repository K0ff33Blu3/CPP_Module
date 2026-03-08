/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 18:48:11 by miricci           #+#    #+#             */
/*   Updated: 2026/03/08 09:35:54 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure( void );
	Cure( const Cure& other );
	Cure&	operator=( const Cure& other );
	~Cure();
	
	AMateria* clone() const;
	void	use( ICharacter& target );
};

#endif