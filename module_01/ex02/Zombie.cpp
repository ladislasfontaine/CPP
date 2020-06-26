/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 11:19:59 by lafontai          #+#    #+#             */
/*   Updated: 2020/06/26 12:36:32 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie::Zombie() : _name("default"), _type("no type")
{
	announce();
}
Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	announce();
}
Zombie::~Zombie()
{
	std::cout << "<" << _name << " (" << _type << ")> dyiiing ..." << std::endl;
}

void	Zombie::advert() const
{
	std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss ..." << std::endl;
}

void	Zombie::announce() const
{
	std::cout << "<" << _name << " (" << _type << ")> I'm aliiiiive ..." << std::endl;
}
