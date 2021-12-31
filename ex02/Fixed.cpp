/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 14:03:59 by graja             #+#    #+#             */
/*   Updated: 2021/12/31 14:18:28 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) : _value(0)
{
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int init)
{
//	std::cout << "INT constructor called" << std::endl;
	this->setRawBits(init);
}

Fixed::Fixed(float const init)
{
//	std::cout << "FLOAT constructor called" << std::endl;
	this->setRawBits(init);
}

Fixed::Fixed(Fixed const &src)
{
//	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void)
{
//	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &ovr)
{
//	std::cout << "Assignment operator called" << std::endl;
	this->_value = ovr.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw * (1 << this->_fract);
}

void	Fixed::setRawBits(float const raw)
{
	this->_value = (int)(roundf(raw * (1 << this->_fract)));
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->getRawBits() / (float)(1 << this->_fract)));
}

int	Fixed::toInt(void) const
{
	return (this->getRawBits() / (1 << this->_fract));
}

std::ostream	&operator<<(std::ostream &o, Fixed const &nbr)
{
	o << nbr.toFloat();
	return (o);
}

/* comparison Overloads */

bool	Fixed::operator==(const Fixed& a) const
{
	if (a.getRawBits() == this->getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator!=(const Fixed& a) const
{
	return (!operator==(a));
}
		
bool	Fixed::operator>(const Fixed& a) const
{
	if (this->getRawBits() > a.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator<(const Fixed& a) const
{
	if (this->getRawBits() < a.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator>=(const Fixed& a) const
{
	return (!operator<(a));
}

bool	Fixed::operator<=(const Fixed& a) const
{
	return (!operator>(a));
}

// arithmic operator overloads

Fixed	Fixed::operator+(const Fixed& a) const
{
	return (this->toFloat() + a.toFloat());
}

Fixed	Fixed::operator-(const Fixed& a) const
{
	return (this->toFloat() - a.toFloat());
}

Fixed	Fixed::operator*(const Fixed& a) const
{
	return (this->toFloat() * a.toFloat());
}

Fixed	Fixed::operator/(const Fixed& a) const
{
	return (this->toFloat() / a.toFloat());
}

// arithmic in/decrement postfix

Fixed&	Fixed::operator++(void)
{
	this->_value++;
	return (*this);
}

Fixed&	Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}

// arithmic in/decrement prefix

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);

	operator++();
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	operator++();
	return (tmp);
}
		
static Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

static Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

