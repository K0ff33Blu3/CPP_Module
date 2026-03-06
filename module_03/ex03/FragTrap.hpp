/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 17:32:55 by miricci           #+#    #+#             */
/*   Updated: 2026/03/06 14:08:28 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap( std::string name );
	FragTrap( void );
	FragTrap( const FragTrap& other );
	FragTrap& operator=( const FragTrap& other );
	~FragTrap();
	
	void highFiveGuys( void );
};


