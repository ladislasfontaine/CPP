/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 11:55:21 by lafontai          #+#    #+#             */
/*   Updated: 2020/06/26 12:42:02 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main(void)
{
	ZombieEvent	event("monster");
	Zombie		z0("Stack", "crazy");
	Zombie*		z1;
	Zombie*		z2;

	z1 = event.newZombie("Marcus");
	z1->advert();
	z2 = event.randomChump();
	z2->advert();
	delete z1;
	z0.advert();
	delete z2;
	return (0);
}
