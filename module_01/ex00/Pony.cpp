/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 10:00:30 by lafontai          #+#    #+#             */
/*   Updated: 2020/06/26 10:51:58 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Pony.hpp"

int	Pony::_totalPonies = 0;

Pony::Pony( std::string name, int age, int power) : _name(name), _color("Blue"), _legs(4), _age(age), _power(power)
{
	++_totalPonies;
}
Pony::Pony() : _name("Default Pony"), _color("Blue"), _legs(4), _age(7), _power(false)
{
	++_totalPonies;
}
Pony::~Pony( void )
{
	--_totalPonies;
}

void	Pony::printTotalPonies( void )
{
	std::cout << "TOTAL PONIES ALIVE: " << _totalPonies << std::endl;
}

void	Pony::printPony( void ) const
{
	std::cout << "Name:        " << _name << std::endl;
	std::cout << "Color:       " << _color << std::endl;
	std::cout << "Legs:        " << _legs << std::endl;
	std::cout << "Age:         " << _age << std::endl;
	if (_power)
		std::cout << "Super power: yes" << std::endl;
	else
		std::cout << "Super power: no" << std::endl;
}
void	Pony::changePonyAge( int age )
{
	_age = age;
	std::cout << _name << "'s poney is now " << _age << " years old!" << std::endl;
}
