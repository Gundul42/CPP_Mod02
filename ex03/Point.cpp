/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 13:30:10 by graja             #+#    #+#             */
/*   Updated: 2022/01/01 14:13:12 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {}

Point::Point(float const a, float const b) : _x(a), _y(b) {}

Point::Point(Point const& cpy)
{
	*this = cpy;
}

Point::~Point(void) {}

Point&	Point::operator=(Point const& src)
{
	*this = src;
	return (*this);
}

Fixed	Point::getXVal(Point const src)const
{
	return (src._x);
}

Fixed	Point::getYVal(Point const src)const
{
	return (src._y);
}
