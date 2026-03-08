/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 17:31:03 by miricci           #+#    #+#             */
/*   Updated: 2026/03/08 12:21:40 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>

# define GRAY	"\033[90m"
# define RESET	"\033[0m"

class	ICharacter;

class	AMateria
{
protected:
	std::string	_type;
public:
	AMateria( void );
	AMateria( const std::string& type );
	AMateria( const AMateria& other );
	AMateria& operator=( const AMateria& other );
	virtual ~AMateria( void );
	
	std::string const & getType() const;
	
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif