/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 13:38:08 by graja             #+#    #+#             */
/*   Updated: 2022/01/01 12:33:05 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class	Fixed
{
	private:
		int				_value;
		static int const	_fract = 8;

	public:
		//constructors
		Fixed(void);
		Fixed(int const init);
		Fixed(float const init);

		//copy constructor
		Fixed(Fixed const &src);

		//destructor
		~Fixed(void);

		Fixed	&operator=(Fixed const &ovr);

		//comparison operator overloads
		bool	operator==(const Fixed& a) const;
		bool	operator!=(const Fixed& a) const;
		bool	operator>(const Fixed& a) const;
		bool	operator<(const Fixed& a) const;
		bool	operator>=(const Fixed& a) const;
		bool	operator<=(const Fixed& a) const;

		//arithmic operator overloads
		Fixed	operator+(const Fixed& a) const;
		Fixed	operator-(const Fixed& a) const;
		Fixed	operator*(const Fixed& a) const;
		Fixed	operator/(const Fixed& a) const;

		//arithmic post in/decrement overloads
		Fixed&	operator++(void);
		Fixed&	operator--(void);

		//arithmic pre in/decrement overloads
		Fixed	operator++(int);
		Fixed	operator--(int);
		
		//min/max
		static const Fixed&	min(const Fixed& a, const Fixed& b);
		static Fixed&	min(Fixed& a, Fixed& b);
		static const Fixed&	max(const Fixed& a, const Fixed& b);
		static Fixed&	max(Fixed& a, Fixed& b);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		void	setRawBits(float const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

//output stream overload std::ostream cannot be a member function
std::ostream	&operator<<(std::ostream &o, Fixed const &nbr);

#endif
