/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 11:13:50 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/05 15:28:57 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
}

Ice::~Ice() {
}

Ice::Ice(const Ice &copy) : AMateria(copy) {
	*this = copy;
}

Ice	&Ice::operator=(const Ice &copy) {
	this->setType(copy.getType());
	this->setXP(copy.getXP());
	return (*this);
}

AMateria*	Ice::clone() const {
	AMateria*	clone = new Ice(*this);
	return (clone);
}

void		Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	increaseXP();
}
