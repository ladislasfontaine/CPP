/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 17:18:16 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/02 17:25:11 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {
}

PlasmaRifle::~PlasmaRifle() {
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &copy) : AWeapon(copy) {
	*this = copy;
}

PlasmaRifle	&PlasmaRifle::operator=(const PlasmaRifle &copy) {
	this->_name = copy.getName();
	this->_damage = copy.getDamage();
	this->_apcost = copy.getAPCost();
	return (*this);
}

void		PlasmaRifle::attack() const {
	std::cout <<  "* piouuu piouuu piouuu *" << std::endl;
}
