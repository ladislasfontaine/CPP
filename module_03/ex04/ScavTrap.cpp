/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 13:08:59 by lafontai          #+#    #+#             */
/*   Updated: 2020/06/30 16:31:52 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <random>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_name = "SCAV TRAP";
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	std::cout << GREEN << ">>> ScavTrap Robot <" << _name << "> aliiiiiiive <<<" << RESET << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
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

void	ScavTrap::challengeNewcomer(std::string const &target)
{
	std::string	challenge[5] = {"Error 404 file not found", "Oil can! Oil can", "Futurama", "Danger! Danger!", "Exterminate!"};
	std::random_device rd;
	std::mt19937 rng(rd());
	std::uniform_int_distribution<int> uni(0, 4);
	std::cout << GREEN << "[CHALLENGE] Welcome <" << target << ">, to pass your way you have to complete [" << challenge[uni(rng)] << "] challenge." << RESET << std::endl;
}
