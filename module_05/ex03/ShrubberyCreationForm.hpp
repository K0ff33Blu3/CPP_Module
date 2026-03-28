/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 12:23:14 by miricci           #+#    #+#             */
/*   Updated: 2026/03/27 15:29:01 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

# include <fstream>

class ShrubberyCreationForm : public AForm
{
private:
	std::string	const	_target;
public:
	// ShrubberyCreationForm( void );
	ShrubberyCreationForm( std::string const name );
	ShrubberyCreationForm( const ShrubberyCreationForm& other );
	ShrubberyCreationForm& operator=( const ShrubberyCreationForm& other );
	~ShrubberyCreationForm();

	virtual void	action() const;
};

#endif