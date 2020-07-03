/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 12:37:38 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/02 15:58:59 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(const Peon &copy) : Victim(copy) {
	*this = copy;
	std::cout << "Zog zog." << std::endl;
}

void	Peon::getPolymorphed() const {
	std::cout << _name << " was just polymorphed into a pink pony!" << std::endl;
}

Peon	&Peon::operator=(const Peon &copy) {
	this->_name = copy._name;
	return (*this);
}
