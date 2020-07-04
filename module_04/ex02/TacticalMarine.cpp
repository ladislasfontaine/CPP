/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 07:03:09 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/04 07:15:39 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() {
	std::cout << "Tactical Marine ready for action !" << std::endl;
}

TacticalMarine::~TacticalMarine() {
	std::cout << "Aaargh ..." << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &copy) {
	std::cout << "Tactical Marine ready for action !" << std::endl;
	*this = copy;
}

TacticalMarine	&TacticalMarine::operator=(const TacticalMarine &copy) {
	(void)copy;
	return (*this);
}

ISpaceMarine*	TacticalMarine::clone() const {
	ISpaceMarine*	clone = new TacticalMarine(*this);
	return (clone);
}

void			TacticalMarine::battleCry() const {
	std::cout << "For the Holy PLOT !" << std::endl;
}
void			TacticalMarine::rangedAttack() const {
	std::cout << "* attacks with a bolter *" << std::endl;
}
void			TacticalMarine::meleeAttack() const {
	std::cout <<  "* attacks with a chainsword *" << std::endl;
}
