/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 11:36:29 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/02 11:36:31 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap(), FragTrap(), NinjaTrap()
{
	_hitPoints = 100;
	_maxHitPoints = 100;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	_name = "SUPER-TP";
	std::cout << PINK << ">>> SUPER-TP <" << _name << "> come to life <<<" << RESET << std::endl;
}
SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	_hitPoints = 100;
	_maxHitPoints = 100;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	std::cout << PINK << ">>> SUPER-TP <" << _name << "> come to life <<<" << RESET << std::endl;
}
SuperTrap::~SuperTrap()
{
	std::cout << PINK << ">>> SUPER-TP <" << _name << "> is now dead... <<<" << RESET << std::endl;
}
SuperTrap	&SuperTrap::operator=(const SuperTrap& robot)
{
	this->_hitPoints = robot._hitPoints;
	this->_maxHitPoints = robot._maxHitPoints;
	this->_energyPoints = robot._energyPoints;
	this->_maxEnergyPoints = robot._maxEnergyPoints;
	this->_level = robot._level;
	this->_name = robot._name;
	this->_meleeAttackDamage = robot._meleeAttackDamage;
	this->_rangedAttackDamage = robot._rangedAttackDamage;
	this->_armorDamageReduction = robot._armorDamageReduction;
	std::cout << PURPLE << ">>> SUPER-TP Operator equal called <<<" << RESET << std::endl;
	return (*this);
}

void		SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}
void		SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}