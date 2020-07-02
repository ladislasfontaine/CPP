/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 16:44:18 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/02 08:12:40 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#define RED "\033[91m"
#define GREEN "\033[92m"
#define YELLOW "\033[93m"
#define PURPLE "\033[94m"
#define PINK "\033[95m"
#define RESET "\033[0m"

class NinjaTrap : virtual public ClapTrap
{
	public:
	NinjaTrap();
	NinjaTrap(std::string name);
	~NinjaTrap();
	NinjaTrap	&operator=(const NinjaTrap&);
	void		ninjaShoebox(ClapTrap& target);
	void		ninjaShoebox(FragTrap& target);
	void		ninjaShoebox(ScavTrap& target);
	void		ninjaShoebox(NinjaTrap& target);
};

#endif