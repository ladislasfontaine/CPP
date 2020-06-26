/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 11:19:59 by lafontai          #+#    #+#             */
/*   Updated: 2020/06/26 15:37:28 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <random>
#include "Zombie.hpp"

std::string	randomChump()
{
	std::string	names[20] = {"Max", "John", "Mike", "Michael", "Luke", "Paul", "Peter", "Lola", "Jenna", "Miranda", "Robert", "Mary", "Patricia", "Jennifer", "Linda", "Elisabeth", "Barbara", "Susan", "Daniel", "Matthew"};
	int			index;

	std::random_device rd;     // only used once to initialise (seed) engine
	std::mt19937 rng(rd());    // random-number engine used (Mersenne-Twister in this case)
	std::uniform_int_distribution<int> uni(0, 19); // guaranteed unbiased
	index = uni(rng);
	return (names[index]);
}

Zombie::Zombie() : _name("default"), _type("no type")
{
	_name = randomChump();
	_type = "warrior";
	created();
}
Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	created();
}
Zombie::~Zombie()
{
	std::cout << "<" << _name << " (" << _type << ")> dyiiing ..." << std::endl;
}

void	Zombie::advert() const
{
	std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss ..." << std::endl;
}

void	Zombie::created() const
{
	std::cout << "<" << _name << " (" << _type << ")> Just created ..." << std::endl;
}

void	Zombie::announce() const
{
	std::cout << "<" << _name << " (" << _type << ")> I'm aliiiiive ..." << std::endl;
}
