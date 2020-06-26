/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 11:17:22 by lafontai          #+#    #+#             */
/*   Updated: 2020/06/26 15:28:54 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
	public:
	Zombie();
	Zombie(std::string name, std::string type);
	~Zombie();
	void	created() const;
	void	advert() const;
	void	announce() const;

	private:
	std::string		_name;
	std::string		_type;
};

#endif