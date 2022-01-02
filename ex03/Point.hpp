/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 13:14:42 by graja             #+#    #+#             */
/*   Updated: 2022/01/02 14:06:35 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H

# include "Fixed.hpp"

class	Point
{
	private	:
		const Fixed	_x;
		const Fixed	_y;

	public	:
		Point(void);
		Point(float const a, float const b);
		Point(Fixed const a, Fixed const b);
		Point(Point const& cpy);

		~Point(void);

		Point&	operator=(Point& src);

		Fixed	getXVal(void) const;
		Fixed	getYVal(void) const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const check);

#endif
