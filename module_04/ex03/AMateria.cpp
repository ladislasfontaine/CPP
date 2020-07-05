/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 10:49:06 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/05 17:05:28 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type), _xp(0) {
}

AMateria::~AMateria() {
}

AMateria::AMateria(const AMateria &copy) {
	*this = copy;
}

AMateria	&AMateria::operator=(const AMateria &copy) {
	_type = copy.getType();
	_xp = copy.getXP();
	return (*this);
}

std::string const &	AMateria::getType() const {
	return (_type);
}
unsigned int		AMateria::getXP() const {
	return (_xp);
}
void				AMateria::setType(std::string const type) {
	_type = type;
}
void				AMateria::setXP(unsigned int xp) {
	_xp = xp;
}
void				AMateria::increaseXP() {
	setXP(10 + getXP());
}

void				AMateria::use(ICharacter& target) {
	(void)target;
	increaseXP();
}
