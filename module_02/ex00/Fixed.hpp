/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 11:56:29 by lafontai          #+#    #+#             */
/*   Updated: 2020/06/29 13:17:20 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	public:
	Fixed();
	~Fixed();
	Fixed(const Fixed&);
	Fixed &operator=(const Fixed&);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	private:
	int					_value;
	static int const	_bits = 8;
};

#endif