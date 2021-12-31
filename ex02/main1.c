/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 14:33:34 by graja             #+#    #+#             */
/*   Updated: 2021/12/31 13:34:19 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main( void ) 
{
	Fixed		a;
	Fixed const b( 10 );
	Fixed c( 42.42f );
	Fixed const d( b );
	int	i;

	a = Fixed( 1234.4321f );
	
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "c++ is " << c++ << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	if (b <= d)
		std::cout << "b and d are EQUAL" << std::endl;
	if (a != d)
		std::cout << " a and d are NOT EQUAL" << std::endl;
	std::cout << a << " + " << c << " = " << a + c << std::endl;
	i = 0;
	while (c < 43)
	{
		std::cout << i << ")  :" << c << std::endl;
		c++;
		i++;
	}
	return (0);
}
