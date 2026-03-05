/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 10:27:52 by miricci           #+#    #+#             */
/*   Updated: 2026/03/05 17:25:38 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
 
# include <string>
# include <iostream>
 
# define GRAY	"\033[90m"
# define RESET	"\033[0m"
 

class ClapTrap
{
protected:
	std::string		_name;
	int				_hitpoints;
	int				_energyPoints;
	int				_attackDamage;
public:
	ClapTrap( std::string name );
	ClapTrap( ClapTrap& other );
	ClapTrap& operator=( ClapTrap &other );
	~ClapTrap();
	
	void	attack( const std::string& target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
};

#endif