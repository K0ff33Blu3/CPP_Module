/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 11:53:33 by miricci           #+#    #+#             */
/*   Updated: 2026/05/02 15:35:17 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <deque>

int main() {
	std::cout << "=== TEST: Basic addNumber ===" << std::endl;
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "Span: " << sp << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    }

	std::cout << "\n=== TEST: Memory ===" << std::endl;
    {
        Span sp = Span(7);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "Span: " << sp << std::endl;
        std::cout << "Span used: " << sp.getNbrOfElements() << std::endl;
        std::cout << "Span capacity: " << sp.getSize() << std::endl;
    }

    std::cout << "\n=== TEST: FullSpanException ===" << std::endl;
    {
        Span sp = Span(2);
        sp.addNumber(1);
        sp.addNumber(2);
        try {
            sp.addNumber(3);
        } catch (Span::FullSpanException& e) {
            std::cout << "Caught: " << e.what() << std::endl;
        }
		std::cout << sp << std::endl;
    }

    std::cout << "\n=== TEST: addLotsOfNumbers (vector) ===" << std::endl;
    {
        std::vector<int> vec;
        vec.push_back(5);
        vec.push_back(10);
        vec.push_back(15);
        vec.push_back(20);
        Span sp = Span(4);
        sp.addLotsOfNumbers(vec);
        std::cout << "Span: " << sp << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    }

    std::cout << "\n=== TEST: addLotsOfNumbers (deque) ===" << std::endl;
    {
        std::deque<int> deq;
        deq.push_back(5);
        deq.push_back(10);
        deq.push_back(15);
        deq.push_back(20);
        Span sp = Span(4);
        sp.addLotsOfNumbers(deq);
        std::cout << "Span: " << sp << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    }

    std::cout << "\n=== TEST: NoSpanFoundException (1 element) ===" << std::endl;
    {
        Span sp = Span(5);
        sp.addNumber(42);
        try {
            std::cout << sp.longestSpan() << std::endl;
        } catch (Span::NoSpanFoundException& e) {
            std::cout << "Caught: " << e.what() << std::endl;
        }
    }

    std::cout << "\n=== TEST: Identical elements (span = 0) ===" << std::endl;
    {
        Span sp = Span(3);
        sp.addNumber(5);
        sp.addNumber(5);
        sp.addNumber(5);
        std::cout << "Span: " << sp << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    }

    std::cout << "\n=== TEST: Negative numbers ===" << std::endl;
    {
        Span sp = Span(4);
        sp.addNumber(-10);
        sp.addNumber(5);
        sp.addNumber(-20);
        sp.addNumber(15);
        std::cout << "Span: " << sp << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    }
	return 0;
}