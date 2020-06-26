/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 11:44:05 by lafontai          #+#    #+#             */
/*   Updated: 2020/06/26 15:22:03 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <random>
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(std::string zombieType) : setZombieType(zombieType)
{}
ZombieEvent::~ZombieEvent()
{}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie	*zombie = new Zombie(name, setZombieType);

	return (zombie);
}
Zombie	*ZombieEvent::randomChump()
{
	std::string	names[20] = {"Max", "John", "Mike", "Michael", "Luke", "Paul", "Peter", "Lola", "Jenna", "Miranda", "Robert", "Mary", "Patricia", "Jennifer", "Linda", "Elisabeth", "Barbara", "Susan", "Daniel", "Matthew"};
	Zombie		*zombie;
	int			index;

	std::random_device rd;     // only used once to initialise (seed) engine
	std::mt19937 rng(rd());    // random-number engine used (Mersenne-Twister in this case)
	std::uniform_int_distribution<int> uni(0, 19); // guaranteed unbiased
	index = uni(rng);
	zombie = new Zombie(names[index], setZombieType);
	return (zombie);
}
