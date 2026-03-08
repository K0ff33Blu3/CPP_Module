/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 09:36:21 by miricci           #+#    #+#             */
/*   Updated: 2026/03/08 10:16:21 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string	_name;
	AMateria*	_inventory[4];
public:
	Character( void );
	Character( std::string name );
	Character( const Character& other );
	Character&	operator=( const Character& other );
	~Character();
	
	std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

#endif