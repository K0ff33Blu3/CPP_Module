/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 15:16:22 by miricci           #+#    #+#             */
/*   Updated: 2026/03/04 15:19:26 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		main( void ) {
	
	ClapTrap	u("prova");
	
	u.attack("enemy");
	u.takeDamage(5);
	u.beRepaired(2);
	
	return (0);
}