/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 13:14:42 by graja             #+#    #+#             */
/*   Updated: 2022/01/01 14:10:12 by graja            ###   ########.fr       */
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
		Point(Point const& cpy);

		~Point(void);

		Point&	operator=(Point const& src);

		Fixed	getXVal(Point const src)const;
		Fixed	getYVal(Point const src)const;
};

#endif
