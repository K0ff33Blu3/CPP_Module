/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 14:45:13 by miricci           #+#    #+#             */
/*   Updated: 2026/04/05 09:43:01 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array( void ) : _data(NULL), _size(0) {}

template <typename T>
Array<T>::Array( unsigned int n ) : _size(n) {
	if (n > 0)
		_data = new T[n];
	else
		_data = NULL;
}

template <typename T>
Array<T>::Array( Array<T> const & other ) : _size(other._size) {
	_data = new T[_size];
	for (unsigned int i = 0; i < _size; i++) {
		_data[i] = other._data[i];
	}
}

template <typename T>
Array<T>& Array<T>::operator=( Array<T> const & other ) {
	if (this != &other) {
		delete[] _data;
		_size = other._size;
		_data = new T[_size];
		for (unsigned int i = 0; i < _size; i++) {
			_data[i] = other._data[i];
		}
	}
	return *this;
}

template <typename T>
T& Array<T>::operator[]( unsigned int n ) {
	if (n >= _size)
		throw std::out_of_range("Index out of bounds");
	return _data[n];
}


template <typename T>
Array<T>::~Array( void ) { delete[] _data; }

template <typename T>
unsigned int	Array<T>::size( void ) const { return (_size); }

template <typename T>
T*				Array<T>::getData( void ) const { return _data; }

template <typename T>
std::ostream& operator<<( std::ostream& o, Array<T> const & array ) {
	if (!array.getData()) {
		o << "nullptr";
	} else {
		o << "[ ";
		for (size_t i = 0; i < array.size(); i++) {
			if (i != 0)
				o << ", ";			
			o << array.getData()[i];
		}
		o << " ]";
	}
	return o;
}

