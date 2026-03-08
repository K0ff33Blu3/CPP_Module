/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 18:51:54 by miricci           #+#    #+#             */
/*   Updated: 2026/03/08 12:21:50 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARCTER_HPP
# define ICHARACTER_HPP

# include <string>
# include <iostream>

# define GRAY	"\033[90m"
# define RESET	"\033[0m"

class	AMateria;

class	ICharacter
{
public:
    virtual ~ICharacter() {}
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};

#endif