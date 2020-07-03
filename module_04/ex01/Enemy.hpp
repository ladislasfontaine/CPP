/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 06:49:12 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/03 08:11:00 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy {
	public:
		Enemy(int hp, std::string const & type);
		Enemy();
		Enemy(const Enemy &copy);
		virtual ~Enemy();

		Enemy	&operator=(const Enemy &copy);

		std::string		getType() const;
		int				getHP() const;
		void			takeDamage(int);

	protected:
		int				_hp;
		std::string		_type;
};

#endif
