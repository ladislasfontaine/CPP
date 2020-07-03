/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 07:11:18 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/03 07:14:44 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &copy) : Enemy(copy) {
	*this = copy;
	std::cout << "* click click click *" << std::endl;
}

RadScorpion	&RadScorpion::operator=(const RadScorpion &copy) {
	this->_hp = copy.getHP();
	this->_type = copy.getType();
	return (*this);
}
