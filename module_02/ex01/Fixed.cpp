/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 13:13:50 by lafontai          #+#    #+#             */
/*   Updated: 2020/06/29 14:57:27 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	_value = n << this->_bits;
}
Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(n * (1 << this->_bits));
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
Fixed::Fixed(const Fixed& fixNum)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixNum;
}
Fixed&	Fixed::operator=(const Fixed& fixNum)
{
	std::cout << "Assignation operator called" << std::endl;
	_value = fixNum.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	return (_value);
}
void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}
float	Fixed::toFloat(void) const
{
	return ((float)getRawBits() / (1 << this->_bits));
}
int		Fixed::toInt(void) const
{
	return (getRawBits() >> this->_bits);
}

std::ostream	&operator<<(std::ostream &out, Fixed const &fixNum)
{
	out << fixNum.toFloat();
	return (out);
}
