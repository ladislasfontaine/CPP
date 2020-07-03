/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 17:07:03 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/02 17:23:15 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon {
	public:
		AWeapon();
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(const AWeapon &copy);
		~AWeapon();

		AWeapon	&operator=(const AWeapon &copy);

		std::string		getName() const;
		int				getAPCost() const;
		int				getDamage() const;
		virtual void	attack() const = 0;

	protected:
		std::string	_name;
		int			_apcost;
		int			_damage;
};

#endif
