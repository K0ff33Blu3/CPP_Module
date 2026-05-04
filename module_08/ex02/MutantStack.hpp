/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 15:42:05 by miricci           #+#    #+#             */
/*   Updated: 2026/05/02 17:14:41 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
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

		class iterator : public std::iterator<std::bidirectional_iterator_tag, T>
		{
			private:
				
			public:
				iterator( void );
				iterator( iterator const & other );
				iterator& operator=( iterator const & other );
				~iterator( void );

				
		}
};

#endif