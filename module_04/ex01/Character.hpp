/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 07:15:39 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/03 07:45:06 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {
	public:
		Character(std::string const & name);
		Character();
		Character(const Character &copy);
		~Character();

		Character	&operator=(const Character &copy);

		void		recoverAP();
		void		equip(AWeapon*);
		void		attack(Enemy*);
		std::string	getName() const;
		int			getAP() const;
		AWeapon*	getWeapon() const;

	private:
		std::string	_name;
		int			_ap;
		AWeapon		*_weapon;
};

std::ostream	&operator<<(std::ostream &out, const Character&);

#endif
