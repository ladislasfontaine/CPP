/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 11:44:05 by lafontai          #+#    #+#             */
/*   Updated: 2020/06/26 15:41:53 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : hordeSize(n)
{
	horde = new Zombie[hordeSize];
	std::cout << "HORDE CREATED" << std::endl;
}
ZombieHorde::~ZombieHorde()
{
	delete[] horde;
	std::cout << "HORDE DESTROYED" << std::endl;
}

void		ZombieHorde::announce()
{
	for (int i(0); i < hordeSize; i++) {
		horde[i].announce();
	}
}
