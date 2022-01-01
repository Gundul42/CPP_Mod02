/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 14:23:03 by graja             #+#    #+#             */
/*   Updated: 2022/01/01 16:09:36 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
/*
static
Fixed	side(Point const a, Point const b, Point const c)
{
	return ((a.getXVal() - c.getXVal()) * (b.getYVal() - c.getYVal()) -
		((b.getXVal() - c.getXVal()) * (a.getYVal() - c.getYVal())));
}
*/
bool	bsp(Point const a, Point const b, Point const c, Point const check)
{
	Point	u, v, w, x;

	u = a;
	v = b;
	w = c;
	x = check;

	return (true);
}
