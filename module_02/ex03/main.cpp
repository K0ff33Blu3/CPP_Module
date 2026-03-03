/* ***************************************************************************/
/*                                                                           */
/*                                                        :::      ::::::::  */
/*   main.cpp                                           :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+    */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+          */
/*   Created: 2026/02/24 14:40:16 by miricci           #+#    #+#            */
/*   Updated: 2026/03/03 14:09:36 by miricci          ###   ########.fr      */
/*                                                                           */
/* ***************************************************************************/

#include "Point.hpp"

int		main( void )
{
    Point A(0.0f, 0.0f);
    Point B(4.0f, 0.0f);
    Point C(0.0f, 3.0f);

    Point P1(1.0f, 1.0f);   // interno
    Point P2(5.0f, 5.0f);   // esterno
    Point P3(2.0f, 0.0f);   // sul lato
	
	std::cout << bsp(A, B, C, P1) << std::endl;
	std::cout << bsp(A, B, C, P2) << std::endl;
	std::cout << bsp(A, B, C, P3) << std::endl;
}
