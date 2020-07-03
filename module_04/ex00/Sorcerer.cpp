/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 12:37:38 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/02 16:00:19 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer() {
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &copy) {
	*this = copy;
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer		&Sorcerer::operator=(const Sorcerer &copy) {
	this->_name = copy._name;
	this->_title = copy._title;
	return (*this);
}

std::string		Sorcerer::getName() {
	return (_name);
}
std::string		Sorcerer::getTitle() {
	return (_title);
}

void			Sorcerer::polymorph(Victim const &victim) const {
	victim.getPolymorphed();
}

std::ostream	&operator<<(std::ostream &out, Sorcerer &obj) {
	out << "I am " << obj.getName() << ", " << obj.getTitle() << ", and i like ponies!" << std::endl;
	return (out);
}
