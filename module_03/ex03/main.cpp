/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 11:37:04 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/02 07:15:43 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int		main(void)
{
	ScavTrap	p1("Aurelia");
	FragTrap	p2("Handsome Jack");
	NinjaTrap	p3("Wotan the Invincible");

	p1.challengeNewcomer("Handsome Jack");
	p1.rangedAttack("Handsome Jack");
	p2.takeDamage(15);
	p3.ninjaShoebox(p1);
	p3.meleeAttack("Handsome Jack");
	p2.takeDamage(60);
	p2.vaulthunter_dot_exe("Aurelia");
	p1.takeDamage(80);
	p1.beRepaired(50);
	p3.ninjaShoebox(p2);
	return (0);
}