/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 07:16:12 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/04 07:23:03 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {
	std::cout <<  "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator() {
	std::cout <<  "I’ll be back ..." << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &copy) {
	std::cout <<  "* teleports from space *" << std::endl;
	*this = copy;
}

AssaultTerminator	&AssaultTerminator::operator=(const AssaultTerminator &copy) {
	(void)copy;
	return (*this);
}

ISpaceMarine*	AssaultTerminator::clone() const {
	ISpaceMarine*	clone = new AssaultTerminator(*this);
	return (clone);
}
void			AssaultTerminator::battleCry() const {
	std::cout <<  "This code is unclean. Purify it !" << std::endl;
}
void			AssaultTerminator::rangedAttack() const {
	std::cout <<  "* does nothing *" << std::endl;
}
void			AssaultTerminator::meleeAttack() const {
	std::cout <<  "* attaque with chainfists *" << std::endl;
}
