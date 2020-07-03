/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 07:48:38 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/03 09:47:02 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int		main(void) {
	Character*	moi = new Character("moi");

	std::cout << *moi;

	Enemy*		b = new RadScorpion();
	AWeapon*	pr = new PlasmaRifle();
	AWeapon*	pf = new PowerFist();

	moi->equip(pr);
	std::cout << *moi;
	moi->equip(pf);
	moi->attack(b);
	std::cout << *moi;
	moi->equip(pr);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;

	std::cout << ">>> MY TESTS <<<" << std::endl;
	Character*	jo = new Character("Johny");
	Enemy*		c = new SuperMutant();

	std::cout << *jo;
	jo->attack(c);
	jo->equip(pf);
	std::cout << *jo;
	jo->attack(c);
	jo->attack(c);
	jo->attack(c);
	std::cout << *jo;
	jo->recoverAP();
	std::cout << *jo;
	jo->recoverAP();
	std::cout << *jo;
	jo->recoverAP();
	jo->recoverAP();
	std::cout << *jo;
	jo->equip(pr);
	std::cout << *jo;
	jo->attack(c);
	std::cout << *jo;
	std::cout << ">>> THE END <<<" << std::endl;

	return (0);
}