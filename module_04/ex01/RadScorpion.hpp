/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 07:11:18 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/03 08:10:50 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>
# include "Enemy.hpp"

class RadScorpion : public Enemy {
	public:
		RadScorpion();
		RadScorpion(const RadScorpion &copy);
		~RadScorpion();

		RadScorpion	&operator=(const RadScorpion &copy);

	private:
};

#endif
