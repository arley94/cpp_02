/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedPointNumber.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoto-gu <acoto-gu@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-01 10:02:25 by acoto-gu          #+#    #+#             */
/*   Updated: 2024-07-01 10:02:25 by acoto-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(/* args */)
{
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	value = (nb * (1 << numberOfFractionalBits));
}

Fixed::Fixed(const float nb) 
{
	std::cout << "Float constructor called" << std::endl;
	value = roundf(nb * (1 << numberOfFractionalBits));
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assigment operator called" << std::endl;
	if (&other != this)
		this->value = other.value;
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &nb)
{
	out << nb.toFloat();
	return (out);
}

int Fixed::getRawBits( void ) const
{
	std::cout << "GetRawBits member function called" << std::endl;
	return (value);
}

void Fixed::setRawBits( const int raw )
{
	value = raw;
}

float Fixed::toFloat( void ) const
{
	return ((float)value / (1 << numberOfFractionalBits));
}

int		Fixed::toInt(void) const
{
	return (roundf((float)value / (1 << numberOfFractionalBits)));
}