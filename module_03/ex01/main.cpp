/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 11:37:04 by lafontai          #+#    #+#             */
/*   Updated: 2020/06/30 13:54:59 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	ScavTrap	p1("Aurelia");
	FragTrap	p2("Handsome Jack");

	p1.challengeNewcomer("Handsome Jack");
	p1.rangedAttack("Handsome Jack");
	p2.takeDamage(20);
	p2.vaulthunter_dot_exe("Aurelia");
	p1.takeDamage(80);
	p1.beRepaired(50);
	return (0);
}