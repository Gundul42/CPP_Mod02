/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 13:30:10 by graja             #+#    #+#             */
/*   Updated: 2022/01/02 12:26:51 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {}

Point::Point(float const a, float const b) : _x(a), _y(b) {}

Point::Point(Point& cpy)
{
	*this = cpy;
}

Point::~Point(void) {}

Point&	Point::operator=(Point & src)
{
	return (src);
}

Fixed	Point::getXVal(void) const
{
	return (this->_x);
}

Fixed	Point::getYVal(void) const
{
	return (this->_y);
}
