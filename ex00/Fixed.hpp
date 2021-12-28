/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 13:38:08 by graja             #+#    #+#             */
/*   Updated: 2021/12/27 15:12:08 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

class	Fixed
{
	private:
		int				_value;
		static int const	_fract = 8;

	public:
		Fixed(void);
		Fixed(int const init);
		Fixed(Fixed const &src);
		~Fixed(void);

		Fixed	&operator=(Fixed const &ovr);

		int	getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
