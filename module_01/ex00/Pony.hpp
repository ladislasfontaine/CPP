/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 09:49:58 by lafontai          #+#    #+#             */
/*   Updated: 2020/06/26 10:43:27 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <string>

class Pony
{
	public:
	Pony( std::string name, int age, int power);
	Pony();
	~Pony( void );
	void		printPony( void ) const;
	void		changePonyAge( int age );
	static void	printTotalPonies( void );


	private:
	static int	_totalPonies;

	std::string	_name;
	std::string	_color;
	int			_legs;
	int			_age;
	bool		_power;
};

#endif