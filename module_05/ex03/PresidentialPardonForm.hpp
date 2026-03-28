/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 13:47:34 by miricci           #+#    #+#             */
/*   Updated: 2026/03/27 17:47:15 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	std::string	const	_target;
public:
	// PresidentialPardonForm( void );
	PresidentialPardonForm( std::string const name );
	PresidentialPardonForm( const PresidentialPardonForm& other );
	PresidentialPardonForm& operator=( const PresidentialPardonForm& other );
	~PresidentialPardonForm();

	virtual void	action() const;
};

#endif