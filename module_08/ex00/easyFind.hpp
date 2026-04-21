/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 11:31:56 by miricci           #+#    #+#             */
/*   Updated: 2026/04/19 13:36:45 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>
# include <iterator>

template <typename T>
void	easyfind(T& cont, int elem) {

	typename T::iterator it = std::find(cont.begin(), cont.end(), elem);
	if (it == cont.end())
		throw std::runtime_error("Element not found");
	else
		std::cout << "Element " << *it << " found." << std::endl;
}

#endif