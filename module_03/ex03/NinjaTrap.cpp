/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 11:39:03 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/02 11:39:09 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap()
{
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_level = 1;
	_name = "NINJA-TRAP";
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
	std::cout << PURPLE << ">>> NinjaTrap <" << _name << "> aliiiiiiive <<<" << RESET << std::endl;
}
NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_level = 1;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
	std::cout << PURPLE << ">>> NinjaTrap <" << _name << "> aliiiiiiive <<<" << RESET << std::endl;
}
NinjaTrap::~NinjaTrap()
{
	std::cout << PURPLE << ">>> NinjaTrap <" << _name << "> is gone..... Bye bye <<<" << RESET << std::endl;
}
NinjaTrap	&NinjaTrap::operator=(const NinjaTrap& ninja)
{
	this->_hitPoints = ninja._hitPoints;
	this->_maxHitPoints = ninja._maxHitPoints;
	this->_energyPoints = ninja._energyPoints;
	this->_maxEnergyPoints = ninja._maxEnergyPoints;
	this->_level = ninja._level;
	this->_name = ninja._name;
	this->_meleeAttackDamage = ninja._meleeAttackDamage;
	this->_rangedAttackDamage = ninja._rangedAttackDamage;
	this->_armorDamageReduction = ninja._armorDamageReduction;
	std::cout << PURPLE << ">>> NinjaTrap Operator equal called <<<" << RESET << std::endl;
	return (*this);
}
void		NinjaTrap::ninjaShoebox(ClapTrap& target)
{
	std::cout << PURPLE << "[ATTACK] Ninja Shoebox attack on CL4P-TP <" << target.getName() << ">" << std::endl;
	std::cout << "Let me teach you the ways of magic!" << RESET << std::endl;
}
void		NinjaTrap::ninjaShoebox(FragTrap& target)
{
	std::cout << PURPLE << "[ATTACK] Ninja Shoebox attack on FR4G-TP <" << target.getName() << ">" << std::endl;
	std::cout << "Don't tell me that wasn't awesome!" << RESET << std::endl;
}
void		NinjaTrap::ninjaShoebox(ScavTrap& target)
{
	std::cout << PURPLE << "[ATTACK] Ninja Shoebox attack on SC4V-TP <" << target.getName() << ">" << std::endl;
	std::cout << "Bad guy go boom!" << RESET << std::endl;
}
void		NinjaTrap::ninjaShoebox(NinjaTrap& target)
{
	std::cout << PURPLE << "[ATTACK] Ninja Shoebox attack on NINJ4-TP <" << target.getName() << ">" << std::endl;
	std::cout << "Freeze! I don't know why I said that." << RESET << std::endl;
}