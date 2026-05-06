/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 15:42:05 by miricci           #+#    #+#             */
/*   Updated: 2026/05/06 12:47:46 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <deque>
#include <algorithm>
#include <iostream>

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack( void );
		MutantStack( const MutantStack& other );
		MutantStack& operator=( const MutantStack& other );
		~MutantStack( void );

		typedef	typename std::deque<T>::iterator	iterator;

		iterator	begin();
		iterator	end();
};

#include "MutantStack.tpp"

#endif