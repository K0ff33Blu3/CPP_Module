/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 16:34:57 by miricci           #+#    #+#             */
/*   Updated: 2026/03/06 16:46:07 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# define GRAY	"\033[90m"
# define RESET	"\033[0m"

# include <string>
# include <iostream>

class Brain
{
private:
	std::string	ideas[100];
public:
	Brain( void );
	Brain( const Brain& other );
	Brain& operator=( const Brain& other );
	~Brain();
};


#endif