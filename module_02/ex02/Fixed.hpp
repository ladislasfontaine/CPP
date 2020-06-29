/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 11:56:29 by lafontai          #+#    #+#             */
/*   Updated: 2020/06/29 15:57:45 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	public:
	Fixed();
	Fixed(const int n);
	Fixed(const float n);
	~Fixed();
	Fixed(const Fixed&);
	Fixed &operator=(const Fixed&);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	bool	operator >(const Fixed& b) const;
	bool	operator <(const Fixed& b) const;
	bool	operator >=(const Fixed& b) const;
	bool	operator <=(const Fixed& b) const;
	bool	operator ==(const Fixed& b) const;
	bool	operator !=(const Fixed& b) const;
	Fixed	operator+(const Fixed &b) const;
	Fixed	operator-(const Fixed &b) const;
	Fixed	operator*(const Fixed &b) const;
	Fixed	operator/(const Fixed &b) const;
	Fixed&	operator++();
	Fixed&	operator--();
	Fixed	operator++(int);
	Fixed	operator--(int);

	static Fixed&		min(Fixed &a, Fixed &b);
	static const Fixed&	min(const Fixed &a, const Fixed &b);
	static Fixed&		max(Fixed &a, Fixed &b);
	static const Fixed&	max(const Fixed &a, const Fixed &b);

	private:
	int					_value;
	static int const	_bits = 8;
};

std::ostream	&operator<<(std::ostream &out, Fixed const &fixNum);

#endif