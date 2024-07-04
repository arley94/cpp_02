
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedPointNumber.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoto-gu <acoto-gu@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-01 10:01:01 by acoto-gu          #+#    #+#             */
/*   Updated: 2024-07-01 10:01:01 by acoto-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_HPP
#define Fixed_HPP

#include <iostream>

class Fixed
{
private:
	int value;
	static const int numberOfFractionalBits = 8;
public:
	explicit Fixed(/* args */);
	explicit Fixed(const Fixed &other);
	explicit Fixed(const int n);
	explicit Fixed(const float n);
	~Fixed();
	Fixed	&operator=(const Fixed &other);
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &nb);

#endif
