/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 13:41:39 by graja             #+#    #+#             */
/*   Updated: 2022/01/01 16:02:33 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) 
{
	Point	a(2.0, 3.5);
	Point	b(7.0, 9.0);
	Point	c(9.5, 1.4);
	Point	chk(4.0, 7.0);

	bsp(a, b ,c ,chk);
	std::cout << a.getYVal() << std::endl;
	return 0;
}
