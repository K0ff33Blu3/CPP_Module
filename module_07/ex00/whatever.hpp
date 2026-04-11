/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 17:51:34 by miricci           #+#    #+#             */
/*   Updated: 2026/04/01 17:59:48 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

template	<typename T>	void	swap( T& a, T& b ) {
	T tmp = a;
	a = b;
	b = tmp;
}

template	<typename T>	T		min( T& a, T& b ) {
	if (a > b)	return b;
	if (a < b)	return a;
	else		return b;	
}

template	<typename T>	T		max( T& a, T& b ) {
	if (a > b)	return a;
	if (a < b)	return b;
	else		return b;	
}

#endif