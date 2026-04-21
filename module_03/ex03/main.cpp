/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 15:16:22 by miricci           #+#    #+#             */
/*   Updated: 2026/04/19 15:33:09 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int		main( void ) {
	
	// FragTrap	f("Franco");
	// ClapTrap	c("Cleto");
	// ScavTrap	s("Steve");
	DiamondTrap	d("Danny");
	
	// c.attack("enemy");
	// c.takeDamage(5);
	// c.beRepaired(2);
	
	// f.attack("enemy");
	// f.takeDamage(5);
	// f.beRepaired(2);
	// f.highFiveGuys();
	
	// s.attack("enemy");
	// s.takeDamage(5);
	// s.beRepaired(2);
	// s.guardGate();
	
	d.attack("enemy");
	d.takeDamage(5);
	d.beRepaired(2);
	d.highFiveGuys();
	d.guardGate();
	d.whoAmI();
		
	return (0);
}