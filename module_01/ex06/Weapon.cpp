/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 18:08:37 by lafontai          #+#    #+#             */
/*   Updated: 2020/06/26 18:13:34 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{}
Weapon::~Weapon()
{}

const std::string	Weapon::getType()
{
	const std::string &ref = type;
	return (ref);
}

void				Weapon::setType(std::string newType)
{
	type = newType;
}