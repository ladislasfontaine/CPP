/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 07:21:14 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/05 10:09:08 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "Squad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int		main() {
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;

	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i) {
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	
	std::cout << ">>> MY TESTS <<<" << std::endl;
	TacticalMarine* m1 = new TacticalMarine;
	ISpaceMarine* m2 = new AssaultTerminator;
	ISpaceMarine* m3 = m2->clone();
	ISpaceMarine* m4 = new AssaultTerminator;
	ISpaceMarine* m5 = m1->clone();
	ISpaceMarine* m6 = new TacticalMarine(*m1);
	Squad* squad1 = new Squad;

	squad1->push(m2);
	squad1->push(m3);
	squad1->push(m4);
	squad1->push(m5);
	squad1->push(m6);
	for (int i = 0; i < squad1->getCount(); ++i) {
		std::cout << "--- Marine Number " << i << " ---" << std::endl;
		ISpaceMarine* cur = squad1->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	Squad* test = new Squad;
	std::cout << "--- Test Size Before: " << test->getCount() << " ---" << std::endl;
	*test = *squad1;
	std::cout << "--- Test Size After: " << test->getCount() << " ---" << std::endl;

	delete squad1;
	delete test;
	return 0;
}