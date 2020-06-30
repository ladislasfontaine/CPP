/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 11:37:04 by lafontai          #+#    #+#             */
/*   Updated: 2020/06/30 11:55:27 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "FragTrap.hpp"

int		main(void)
{
	FragTrap	p1("Handsome Jack");
	FragTrap	p2("Aurelia");
	FragTrap	p3(p2);

	p1.rangedAttack("Aurelia");
	p2.takeDamage(20);
	p2.vaulthunter_dot_exe("Handsome Jack");
	p1.takeDamage(80);
	p1.beRepaired(3);
	p3.beRepaired(70);
	p3.vaulthunter_dot_exe("Handsome Jack");
	p1.takeDamage(40);
	return (0);
}