/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 18:14:25 by lafontai          #+#    #+#             */
/*   Updated: 2020/06/26 18:34:42 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA
{
	public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	void	attack() const;

	private:
	std::string	name;
	Weapon&		weapon;
};

#endif