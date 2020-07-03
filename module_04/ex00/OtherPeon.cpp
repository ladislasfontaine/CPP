/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OtherPeon.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 16:14:37 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/02 16:22:40 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OtherPeon.hpp"

OtherPeon::OtherPeon(std::string name) : Victim(name) {
	std::cout << "Zig zag" << std::endl;
}

OtherPeon::~OtherPeon() {
	std::cout << "Grouark" << std::endl;
}

OtherPeon::OtherPeon(const OtherPeon &copy) : Victim(copy) {
	*this = copy;
	std::cout << "Zig zag" << std::endl;
}

OtherPeon	&OtherPeon::operator=(const OtherPeon &copy) {
	this->_name = copy._name;
	return (*this);
}

void		OtherPeon::getPolymorphed() const {
	std::cout << _name << " was just polymorphed into a blue panthere!" << std::endl;
}
