/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 17:18:16 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/03 06:39:47 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
	public:
		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle &copy);
		~PlasmaRifle();

		PlasmaRifle	&operator=(const PlasmaRifle &copy);

		virtual void	attack() const;

	private:
};

#endif
