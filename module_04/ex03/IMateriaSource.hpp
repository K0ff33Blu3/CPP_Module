/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 11:06:23 by miricci           #+#    #+#             */
/*   Updated: 2026/03/08 12:22:03 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# define GRAY	"\033[90m"
# define RESET	"\033[0m"

# include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual				~IMateriaSource() {}
	virtual	void		learnMateria(AMateria*) = 0;
	virtual	AMateria*	createMateria(std::string const & type) = 0;
};

#endif