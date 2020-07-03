/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 17:07:03 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/02 17:17:18 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage) {
}

AWeapon::~AWeapon() {
}

AWeapon::AWeapon(const AWeapon &copy) {
	*this = copy;
}

AWeapon	&AWeapon::operator=(const AWeapon &copy) {
	this->_name = copy._name;
	this->_apcost = copy._apcost;
	this->_damage = copy._damage;
	return (*this);
}

std::string		AWeapon::getName() const {
	return (_name);
}
int				AWeapon::getAPCost() const {
	return (_apcost);
}
int				AWeapon::getDamage() const {
	return (_damage);
}
