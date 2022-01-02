/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 13:41:39 by graja             #+#    #+#             */
/*   Updated: 2022/01/02 12:37:15 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) 
{
	Point	a(2.0, 3.5);
	Point	b(7.5, 9.0);
	Point	c = a; //(9.5, 1.5);
	Fixed	test;

	test = c.getYVal() + a.getYVal();
	std::cout << test << std::endl;
	return 0;
}
