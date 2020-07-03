/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 06:59:51 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/03 07:05:51 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include "Enemy.hpp"

class SuperMutant : public Enemy {
	public:
		SuperMutant();
		SuperMutant(const SuperMutant &copy);
		~SuperMutant();

		SuperMutant	&operator=(const SuperMutant &copy);

		void		takeDamage(int);

	private:
};

#endif
