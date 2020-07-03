/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 06:41:31 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/03 06:49:17 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {
}

PowerFist::~PowerFist() {
}

PowerFist::PowerFist(const PowerFist &copy) : AWeapon(copy) {
	*this = copy;
}

PowerFist	&PowerFist::operator=(const PowerFist &copy) {
	this->_name = copy.getName();
	this->_apcost = copy.getAPCost();
	this->_damage = copy.getDamage();
	return (*this);
}

void		PowerFist::attack() const {
	std::cout << "* pschhh... SBAM ! *" << std::endl;
}
