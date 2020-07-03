/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 07:15:39 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/03 09:37:10 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : _name(name), _ap(40), _weapon(0) {
}

Character::~Character() {
}

Character::Character(const Character &copy) {
	*this = copy;
}

Character	&Character::operator=(const Character &copy) {
	this->_name = copy._name;
	this->_ap = copy._ap;
	this->_weapon = copy._weapon;
	return (*this);
}

void		Character::recoverAP() {
	_ap += 10;
	if (_ap > 40)
		_ap = 40;
}

void		Character::equip(AWeapon* weapon) {
	_weapon = weapon;
}

void		Character::attack(Enemy* enemy) {
	if (_weapon && enemy && enemy->getHP() > 0 && _ap >= _weapon->getAPCost()) {
		std::cout << _name << " attaque " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
		_weapon->attack();
		_ap -= _weapon->getAPCost();
		enemy->takeDamage(_weapon->getDamage());
		if (enemy->getHP() <= 0)
			delete enemy;
	}
}

std::string	Character::getName() const {
	return (_name);
}
int			Character::getAP() const {
	return (_ap);
}
AWeapon*	Character::getWeapon() const {
	return (_weapon);
}

std::ostream	&operator<<(std::ostream &out, const Character& hero) {
	if (!hero.getWeapon())
		out << hero.getName() << " has " << hero.getAP() << " AP and is unarmed" << std::endl;
	else
		out << hero.getName() << " has " << hero.getAP() << " AP and carries a " << hero.getWeapon()->getName() << std::endl;
	return (out);
}
