/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 11:30:46 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/05 17:10:16 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
}

Cure::~Cure() {
}

Cure::Cure(const Cure &copy) : AMateria(copy) {
	*this = copy;
}

Cure	&Cure::operator=(const Cure &copy) {
	this->setType(copy.getType());
	this->setXP(copy.getXP());
	return (*this);
}

AMateria*	Cure::clone() const {
	AMateria*	clone = new Cure(*this);
	return (clone);
}

void		Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	increaseXP();
}
