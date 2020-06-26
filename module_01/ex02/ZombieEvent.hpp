/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 11:27:57 by lafontai          #+#    #+#             */
/*   Updated: 2020/06/26 11:43:59 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <string>
#include "Zombie.hpp"

class ZombieEvent
{
	public:
	ZombieEvent(std::string zombieType);
	~ZombieEvent();
	Zombie	*newZombie(std::string name);
	Zombie	*randomChump();

	private:
	std::string	setZombieType;
};

#endif