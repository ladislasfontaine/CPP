/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 13:13:50 by lafontai          #+#    #+#             */
/*   Updated: 2020/06/29 16:23:36 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{}
Fixed::Fixed(const int n)
{
	_value = n << this->_bits;
}
Fixed::Fixed(const float n)
{
	_value = roundf(n * (1 << this->_bits));
}
Fixed::~Fixed()
{}
Fixed::Fixed(const Fixed& fixNum)
{
	*this = fixNum;
}
Fixed&	Fixed::operator=(const Fixed& fixNum)
{
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

bool	Fixed::operator >(const Fixed& b) const
{
	return (_value > b._value);
}
bool	Fixed::operator <(const Fixed& b) const
{
	return (_value < b._value);
}
bool	Fixed::operator >=(const Fixed& b) const
{
	return (_value >= b._value);
}
bool	Fixed::operator <=(const Fixed& b) const
{
	return (_value <= b._value);
}
bool	Fixed::operator ==(const Fixed& b) const
{
	return (_value == b._value);
}
bool	Fixed::operator !=(const Fixed& b) const
{
	return (_value != b._value);
}
Fixed	Fixed::operator+(const Fixed &b) const
{
	Fixed	n(this->toFloat() + b.toFloat());
	return (n);
}
Fixed	Fixed::operator-(const Fixed &b) const
{
	Fixed	n(this->toFloat() - b.toFloat());
	return (n);
}
Fixed	Fixed::operator*(const Fixed &b) const
{
	Fixed	n(this->toFloat() * b.toFloat());
	return (n);
}
Fixed	Fixed::operator/(const Fixed &b) const
{
	Fixed	n(this->toFloat() / b.toFloat());
	return (n);
}
Fixed&	Fixed::operator++()
{
	setRawBits(_value + 1);
	return (*this);
}
Fixed&	Fixed::operator--()
{
	setRawBits(_value - 1);
	return (*this);
}
Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);
	setRawBits(_value + 1);
	return (tmp);
}
Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);
	setRawBits(_value - 1);
	return (tmp);
}

Fixed&			Fixed::min(Fixed &a, Fixed &b)
{
	return (a._value < b._value ? a : b);
}
const Fixed&	Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a._value < b._value ? a : b);
}
Fixed&			Fixed::max(Fixed &a, Fixed &b)
{
	return (a._value > b._value ? a : b);
}
const Fixed&	Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a._value > b._value ? a : b);
}
