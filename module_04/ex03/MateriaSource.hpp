/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 11:08:01 by miricci           #+#    #+#             */
/*   Updated: 2026/03/08 11:52:01 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria*	_mat[4];
public:
	MateriaSource( void );
	MateriaSource( const MateriaSource& other );
	MateriaSource& operator=( const MateriaSource& other );
	~MateriaSource();
	
	void	learnMateria( AMateria* m );
	AMateria*	createMateria( std::string const & type );
	
};

#endif