/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 18:19:31 by miricci           #+#    #+#             */
/*   Updated: 2026/04/03 14:39:41 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template	<typename T, typename Func>
	void	iter(T* t, std::size_t const len, Func f) {
		for (std::size_t i = 0; i < len; i++) {
			f(t[i]);
		}
	}

template	<typename T>
	void	printData( T const & data ) {
		std::cout << data << std::endl;
	}