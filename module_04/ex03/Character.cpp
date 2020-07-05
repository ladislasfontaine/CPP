/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 15:34:26 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/05 17:30:11 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name) {
	for (int i(0); i < 4; i++)
		_materias[i] = 0;
}

Character::~Character() {
	for (int i(0); i < 4; i++) {
		if (_materias[i])
			delete _materias[i];
	}
}

Character::Character(const Character &copy) {
	*this = copy;
}

Character	&Character::operator=(const Character &copy) {
	_name = copy.getName();
	for (int i(0); i < 4; i++) {
		if (_materias[i]) {
			delete _materias[i];
			_materias[i] = 0;
		}
		if (copy._materias[i])
			_materias[i] = copy._materias[i]->clone();
	}
	return (*this);
}

std::string const &	Character::getName() const {
	return (_name);
}

void				Character::equip(AMateria* m) {
	if (!m)
		return ;
	for (int i(0); i < 4; i++) {
		if (!_materias[i]) {
			_materias[i] = m;
			return ;
		}
	}
}

void				Character::unequip(int idx) {
	if (idx >= 0 && idx <= 3)
		_materias[idx] = 0;
}

void				Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx <= 3 && _materias[idx]) {
		_materias[idx]->use(target);
	}
}
