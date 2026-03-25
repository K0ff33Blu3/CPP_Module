/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 15:16:22 by miricci           #+#    #+#             */
/*   Updated: 2026/03/09 10:27:40 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int		main( void ) {
	
	ClapTrap	u("Cleto");
	ScavTrap	v("Steve");
	ScavTrap	w(v);
	
	u.attack("enemy");
	u.takeDamage(5);
	u.beRepaired(2);
	
	v.attack("enemy");
	v.takeDamage(25);
	v.beRepaired(10);
	v.guardGate();
	
	w.attack("enemy");
	w.takeDamage(25);
	w.beRepaired(10);
	w.guardGate();
	
	return (0);
}