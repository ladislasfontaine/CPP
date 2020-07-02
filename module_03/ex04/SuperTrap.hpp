/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 07:30:19 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/02 10:01:27 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include <string>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

#define RED "\033[91m"
#define GREEN "\033[92m"
#define YELLOW "\033[93m"
#define PURPLE "\033[94m"
#define PINK "\033[95m"
#define RESET "\033[0m"

class SuperTrap : virtual public FragTrap, virtual public NinjaTrap
{
	public:
	SuperTrap();
	SuperTrap(std::string name);
	~SuperTrap();
	SuperTrap	&operator=(const SuperTrap&);
	void		rangedAttack(std::string const &target);
	void		meleeAttack(std::string const &target);
};

#endif