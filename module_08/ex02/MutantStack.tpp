/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 17:15:56 by miricci           #+#    #+#             */
/*   Updated: 2026/05/06 12:47:35 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack( void ) : std::stack<T>() {}

template <typename T>
MutantStack<T>::MutantStack( MutantStack<T> const & other ) : std::stack<T>(other) {}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=( MutantStack<T> const & other ) {
	if (this != &other) {
		std::stack<T>::operator=(other);
	}
	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack( void ) {}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin() { return this->c.begin(); };

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end()	{ return this->c.end(); };