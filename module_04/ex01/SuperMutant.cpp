/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 06:59:51 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/03 07:10:43 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &copy) : Enemy(copy) {
	*this = copy;
	std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant	&SuperMutant::operator=(const SuperMutant &copy) {
	this->_hp = copy.getHP();
	this->_type = copy.getType();
	return (*this);
}

void		SuperMutant::takeDamage(int damage) {
	if (damage - 3 > 0)
		_hp -= (damage - 3);
}
