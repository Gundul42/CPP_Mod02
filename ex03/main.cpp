/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 13:41:39 by graja             #+#    #+#             */
/*   Updated: 2022/01/02 14:13:18 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) 
{
	Point	a(2.0, 3.5);
	Point	b(7.5, 9.0);
	Point	c(9.5, 1.5);
	Point	d(2.0, 3.5);

	if (bsp(a, b, c, d))
		std::cout << "Point d is in the triangle" << std::endl;
	else
		std::cout << "Point d is NOT in the triangle" << std::endl;
	return 0;
}
