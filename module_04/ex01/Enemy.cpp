/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 06:49:12 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/03 09:25:42 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type) {
}

Enemy::~Enemy() {
}

Enemy::Enemy(const Enemy &copy) {
	*this = copy;
}

Enemy	&Enemy::operator=(const Enemy &copy) {
	this->_hp = copy._hp;
	this->_type = copy._type;
	return (*this);
}

std::string		Enemy::getType() const {
	return (_type);
}

int				Enemy::getHP() const {
	return (_hp);
}

void			Enemy::takeDamage(int damage) {
	if (damage > 0)
		_hp -= damage;
}
