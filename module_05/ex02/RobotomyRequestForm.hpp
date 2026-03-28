/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 13:45:52 by miricci           #+#    #+#             */
/*   Updated: 2026/03/27 17:47:50 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <ctime>
# include <cstdlib>

class RobotomyRequestForm : public AForm
{
private:
	std::string	const	_target;
public:
	// RobotomyRequestForm( void );
	RobotomyRequestForm( std::string const name );
	RobotomyRequestForm( const RobotomyRequestForm& other );
	RobotomyRequestForm& operator=( const RobotomyRequestForm& other );
	~RobotomyRequestForm();

	virtual void	action() const;
};

#endif