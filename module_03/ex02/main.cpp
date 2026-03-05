/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 15:16:22 by miricci           #+#    #+#             */
/*   Updated: 2026/03/05 17:56:36 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main( void ) {
	
	FragTrap	u("Franco");
	ClapTrap	v("Cleto");
	
	v.attack("enemy");
	v.takeDamage(5);
	v.beRepaired(2);
	
	u.attack("enemy");
	u.takeDamage(5);
	u.beRepaired(2);
	u.highFiveGuys();
	
	return (0);
}