/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 15:16:22 by miricci           #+#    #+#             */
/*   Updated: 2026/03/05 17:28:40 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int		main( void ) {
	
	ClapTrap	u("Cleto");
	ScavTrap	v("Steve");
	
	u.attack("enemy");
	u.takeDamage(5);
	u.beRepaired(2);
	
	v.attack("enemy");
	v.takeDamage(25);
	v.beRepaired(10);
	v.guardGate();
	
	return (0);
}