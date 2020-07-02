/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 15:08:17 by lafontai          #+#    #+#             */
/*   Updated: 2020/06/30 15:22:58 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitPoints(100), _maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50), _level(1), _name("CLAP-TRAP"), _meleeAttackDamage(20), _rangedAttackDamage(15), _armorDamageReduction(3)
{
	std::cout << YELLOW << ">>> ClapTrap Robot <" << _name << "> aliiiiiiive <<<" << RESET << std::endl;
}
ClapTrap::ClapTrap(std::string name) : _hitPoints(100), _maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50), _level(1), _name(name), _meleeAttackDamage(20), _rangedAttackDamage(15), _armorDamageReduction(3)
{
	std::cout << YELLOW << ">>> ClapTrap Robot <" << _name << "> aliiiiiiive <<<" << RESET << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& robot)
{
	*this = robot;
	std::cout << YELLOW << ">>> Copy ClapTrap <" << _name << "> aliiiiiiive <<<" << RESET << std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout << YELLOW << ">>> ClapTrap Robot <" << _name << "> has been destroyed <<<" << RESET << std::endl;
}
ClapTrap	&ClapTrap::operator=(const ClapTrap& robot)
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
	std::cout << YELLOW << ">>> ClapTrap Operator equal called <<<" << RESET << std::endl;
	return (*this);
}

void	ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << YELLOW << "[ATTACK] CLAP-TRAP <" << _name << "> attacks <" << target << "> from range, causing <" << _rangedAttackDamage <<  "> points of damages !" << RESET << std::endl;
}
void	ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << YELLOW << "[ATTACK] CLAP-TRAP <" << _name << "> launch a melee on <" << target << "> [AIIIIIIE] <" << _meleeAttackDamage <<  "> points of damages !" << RESET << std::endl;
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	if ((amount - _armorDamageReduction) > 0)
	{
		_hitPoints -= (amount - _armorDamageReduction);
		_hitPoints = _hitPoints < 0 ? 0 : _hitPoints;
		std::cout << YELLOW << "[DAMAGE] CLAP-TRAP <" << _name << "> took <" << (amount - _armorDamageReduction) << "> points of damage [OUCHHH] and now has <" << _hitPoints << "> of life..." << RESET << std::endl;
	}
	else
		std::cout << YELLOW << "[PROTECTED] CLAP-TRAP <" << _name << "> has been attacked but is fully protected! Nice sir." << std::endl;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	_hitPoints += amount;
	_hitPoints = _hitPoints > _maxHitPoints ? _maxHitPoints : _hitPoints;
	std::cout << YELLOW << "[REPARATION] CLAP-TRAP <" << _name << "> now has <" << _hitPoints << "> life points." << RESET << std::endl;
}