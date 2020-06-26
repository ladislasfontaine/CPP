/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 18:03:41 by lafontai          #+#    #+#             */
/*   Updated: 2020/06/26 18:13:36 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
	public:
	Weapon(std::string type);
	~Weapon();
	const std::string	getType();
	void				setType(std::string newType);

	private:
	std::string	type;
};

#endif