/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 08:21:52 by lafontai          #+#    #+#             */
/*   Updated: 2020/06/30 16:35:22 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <random>
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_name = "FR4G-TP";
	std::cout << RED << ">>> Default constructor: Robot <" << _name << "> just created <<<" << RESET << std::endl;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << RED << ">>> Name constructor: Robot <" << _name << "> just created <<<" << RESET << std::endl;
}
FragTrap::FragTrap(const FragTrap& robot)
{
	*this = robot;
	std::cout << RED << ">>> Copy constructor: Robot <" << _name << "> just created <<<" << RESET << std::endl;
}
FragTrap::~FragTrap()
{
	std::cout << RED << ">>> Robot <" << _name << "> has been destroyed <<<" << RESET << std::endl;
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
	std::cout << RED << ">>> Operator equal called <<<" << RESET << std::endl;
	return (*this);
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::string	attack[5] = {"grenades", "rocket launchers", "combat rifles", "revolvers", "eridian weapons"};

	if (_energyPoints < 25)
	{
		std::cout << RED << "[WEAK] FR4G-TP <" << _name << "> not enough energy to launch an attack" << RESET << std::endl;
		return ;
	}
	std::random_device rd;
	std::mt19937 rng(rd());
	std::uniform_int_distribution<int> uni(0, 4);
	_energyPoints -= 25;
	std::cout << RED << "[ATTACK] FR4G-TP <" << _name << "> launch an attack with [" << attack[uni(rng)] << "] on <" << target << ">" << RESET << std::endl;
}
