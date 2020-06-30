/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 13:08:59 by lafontai          #+#    #+#             */
/*   Updated: 2020/06/30 13:52:39 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <random>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : _hitPoints(100), _maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50), _level(1), _name("SC4V-TP"), _meleeAttackDamage(20), _rangedAttackDamage(15), _armorDamageReduction(3)
{
	std::cout << GREEN << ">>> ScavTrap Robot <" << _name << "> aliiiiiiive <<<" << RESET << std::endl;
}
ScavTrap::ScavTrap(std::string name) : _hitPoints(100), _maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50), _level(1), _name(name), _meleeAttackDamage(20), _rangedAttackDamage(15), _armorDamageReduction(3)
{
	std::cout << GREEN << ">>> ScavTrap Robot <" << _name << "> aliiiiiiive <<<" << RESET << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap& robot)
{
	*this = robot;
	std::cout << GREEN << ">>> Copy ScavTrap <" << _name << "> aliiiiiiive <<<" << RESET << std::endl;
}
ScavTrap::~ScavTrap()
{
	std::cout << GREEN << ">>> ScavTrap Robot <" << _name << "> has been destroyed <<<" << RESET << std::endl;
}
ScavTrap	&ScavTrap::operator=(const ScavTrap& robot)
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
	std::cout << GREEN << ">>> ScavTrap Operator equal called <<<" << RESET << std::endl;
	return (*this);
}

void	ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << GREEN << "[ATTACK] SC4V-TP <" << _name << "> attacks <" << target << "> from range, causing <" << _rangedAttackDamage <<  "> points of damages !" << RESET << std::endl;
}
void	ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << GREEN << "[ATTACK] SC4V-TP <" << _name << "> launch a melee on <" << target << "> [AIIIIIIE] <" << _meleeAttackDamage <<  "> points of damages !" << RESET << std::endl;
}
void	ScavTrap::takeDamage(unsigned int amount)
{
	if ((amount - _armorDamageReduction) > 0)
	{
		_hitPoints -= (amount - _armorDamageReduction);
		_hitPoints = _hitPoints < 0 ? 0 : _hitPoints;
		std::cout << GREEN << "[DAMAGE] SC4V-TP <" << _name << "> took <" << (amount - _armorDamageReduction) << "> points of damage [OUCHHH] and now has <" << _hitPoints << "> of life..." << RESET << std::endl;
	}
	else
		std::cout << GREEN << "[PROTECTED] SC4V-TP <" << _name << "> has been attacked but is fully protected! Nice sir." << std::endl;
}
void	ScavTrap::beRepaired(unsigned int amount)
{
	_hitPoints += amount;
	_hitPoints = _hitPoints > _maxHitPoints ? _maxHitPoints : _hitPoints;
	std::cout << GREEN << "[REPARATION] SC4V-TP <" << _name << "> now has <" << _hitPoints << "> life points." << RESET << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const &target)
{
	std::string	challenge[5] = {"Error 404 file not found", "Oil can! Oil can", "Futurama", "Danger! Danger!", "Exterminate!"};
	std::random_device rd;
	std::mt19937 rng(rd());
	std::uniform_int_distribution<int> uni(0, 4);
	std::cout << GREEN << "[CHALLENGE] Welcome <" << target << ">, to pass your way you have to complete [" << challenge[uni(rng)] << "] challenge." << RESET << std::endl;
}
