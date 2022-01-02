/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 12:57:39 by graja             #+#    #+#             */
/*   Updated: 2022/01/02 14:07:47 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static
bool	rorl(Point const a, Point const b, Point const c)
{
	Fixed tmp;
	
	tmp =(a.getXVal() - c.getXVal()) * (b.getYVal() - c.getYVal()) 
		- (b.getXVal() - c.getXVal()) * (a.getYVal() - c.getYVal());
	if (tmp < 0)
		return (true);
	return (false);
}

bool	bsp(Point const a, Point const b, Point const c, Point const check)
{
	if (rorl(check, a, b) && rorl(check, b, c) && rorl(check, c, a))
		return (true);
	else if (!rorl(check, a, b) && !rorl(check, b, c) && !rorl(check, c, a))
		return (true);
	return (false);
}
