/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 16:23:22 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/05 17:47:33 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main() {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* moi = new Character("moi");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	moi->equip(tmp);
	tmp = src->createMateria("cure");
	moi->equip(tmp);
	ICharacter* bob = new Character("bob");
	moi->use(0, *bob);
	moi->use(1, *bob);

	delete bob;
	delete moi;
	delete src;

	std::cout << ">>> MY TESTS <<<" << std::endl;
	IMateriaSource* source = new MateriaSource();
	source->learnMateria(new Ice());
	source->learnMateria(new Cure());
	source->learnMateria(new Ice());
	Character* p1 = new Character("p1");
	Character* p2 = new Character("p2");

	AMateria* temp;
	temp = source->createMateria("fire");
	p1->equip(temp);
	temp = source->createMateria("cure");
	p2->equip(temp);
	temp = source->createMateria("cure");
	p1->equip(temp);
	temp = source->createMateria("ice");
	p1->equip(temp);
	temp = source->createMateria("cure");
	p1->equip(temp);
	ICharacter* max = new Character("max");
	std::cout << "P1 Before:" << std::endl;
	p1->use(0, *max);
	p1->use(1, *max);
	p1->use(2, *max);
	p1->use(3, *max);
	p1->use(42, *max);
	p1->use(-42, *max);
	p1->unequip(0);
	p1->unequip(-130);
	std::cout << "P2 Before:" << std::endl;
	p2->use(0, *max);
	p2->use(1, *max);
	p2->use(2, *max);
	p2->use(3, *max);
	std::cout << "P1 After:" << std::endl;
	temp = source->createMateria("ice");
	p1->equip(temp);
	p1->use(0, *max);
	p1->use(1, *max);
	p1->use(2, *max);
	p1->use(3, *max);
	*p2 = *p1;
	std::cout << "P2 After:" << std::endl;
	p2->use(0, *max);
	p2->use(1, *max);
	p2->use(2, *max);
	p2->use(3, *max);
	delete max;
	delete p1;
	delete p2;
	delete source;

	return 0;
}