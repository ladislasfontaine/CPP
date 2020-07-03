/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 13:54:43 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/02 16:00:35 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name) {
	std::cout << "A random victim called " << _name << " just appeared!" << std::endl;
}

Victim::~Victim() {
	std::cout << "The victim " << _name << " died for no apparent reasons!" << std::endl;
}

Victim::Victim(const Victim &copy) {
	*this = copy;
	std::cout << "A random victim called " << _name << " just appeared!" << std::endl;
}

Victim	&Victim::operator=(const Victim &copy) {
	this->_name = copy._name;
	return (*this);
}

std::string		Victim::getName() {
	return (_name);
}

void			Victim::getPolymorphed() const {
	std::cout << _name << " was just polymorphed in a cute little sheep!" << std::endl;
}

std::ostream	&operator<<(std::ostream &out, Victim &obj) {
	out << "I'm " << obj.getName() << " and I like otters!" << std::endl;
	return (out);
}
