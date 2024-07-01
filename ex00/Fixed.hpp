
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

class Fixed
{
private:
	int value;
	static const int numberOfFractionalBits;
public:
	explicit Fixed(/* args */);
	explicit Fixed(Fixed &other);
	~Fixed();
	void operator=(const Fixed& other);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif
