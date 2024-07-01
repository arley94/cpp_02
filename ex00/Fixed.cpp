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

Fixed::Fixed(/* args */)
{
    std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
	this->value = other.value;
}

void	Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assigment operator called" << std::endl;
    if (this != &other)
    {
	    this->value = other.value;
    }
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
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