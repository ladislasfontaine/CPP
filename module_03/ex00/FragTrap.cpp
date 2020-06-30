/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 08:21:52 by lafontai          #+#    #+#             */
/*   Updated: 2020/06/30 11:51:05 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <random>
#include "FragTrap.hpp"

FragTrap::FragTrap() : _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _level(1), _name("FR4G-TP"), _meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5)
{
	std::cout << ">>> Default constructor: Robot <" << _name << "> just created <<<" << std::endl;
}
FragTrap::FragTrap(std::string name) : _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _level(1), _name(name), _meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5)
{
	std::cout << ">>> Name constructor: Robot <" << _name << "> just created <<<" << std::endl;
}
FragTrap::FragTrap(const FragTrap& robot)
{
	*this = robot;
	std::cout << ">>> Copy constructor: Robot <" << _name << "> just created <<<" << std::endl;
}
FragTrap::~FragTrap()
{
	std::cout << ">>> Robot <" << _name << "> has been destroyed <<<" << std::endl;
}
FragTrap	&FragTrap::operator=(const FragTrap& robot)
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
	std::cout << ">>> Operator equal called <<<" << std::endl;
	return (*this);
}

void	FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "[ATTACK] FR4G-TP <" << _name << "> attacks <" << target << "> from range, causing <" << _rangedAttackDamage <<  "> points of damages !" << std::endl;
}
void	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "[ATTACK] FR4G-TP <" << _name << "> launch a melee on <" << target << "> [AIIIIIIE] <" << _meleeAttackDamage <<  "> points of damages !" << std::endl;
}
void	FragTrap::takeDamage(unsigned int amount)
{
	if ((amount - _armorDamageReduction) > 0)
	{
		_hitPoints -= (amount - _armorDamageReduction);
		_hitPoints = _hitPoints < 0 ? 0 : _hitPoints;
		std::cout << "[DAMAGE] FR4G-TP <" << _name << "> took <" << (amount - _armorDamageReduction) << "> points of damage [OUCHHH] and now has <" << _hitPoints << "> of life..." << std::endl;
	}
	else
		std::cout << "[PROTECTED] FR4G-TP <" << _name << "> has been attacked but is fully protected! Nice sir." << std::endl;
}
void	FragTrap::beRepaired(unsigned int amount)
{
	_hitPoints += amount;
	_hitPoints = _hitPoints > _maxHitPoints ? _maxHitPoints : _hitPoints;
	std::cout << "[REPARATION] FR4G-TP <" << _name << "> now has <" << _hitPoints << "> life points." << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::string	attack[5] = {"grenades", "rocket launchers", "combat rifles", "revolvers", "eridian weapons"};

	if (_energyPoints < 25)
	{
		std::cout << "[WEAK] FR4G-TP <" << _name << "> not enough energy to launch an attack" << std::endl;
		return ;
	}
	std::random_device rd;
	std::mt19937 rng(rd());
	std::uniform_int_distribution<int> uni(0, 4);
	_energyPoints -= 25;
	std::cout << "[ATTACK] FR4G-TP <" << _name << "> launch an attack with [" << attack[uni(rng)] << "] on <" << target << ">" << std::endl;
}
