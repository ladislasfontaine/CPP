/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 06:41:31 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/03 06:44:54 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PowerFist : public AWeapon {
	public:
		PowerFist();
		PowerFist(const PowerFist &copy);
		~PowerFist();

		PowerFist	&operator=(const PowerFist &copy);

		virtual void	attack() const;

	private:
};

#endif
