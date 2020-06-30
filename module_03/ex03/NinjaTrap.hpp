/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 16:44:18 by lafontai          #+#    #+#             */
/*   Updated: 2020/06/30 16:53:31 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:
	NinjaTrap();
	NinjaTrap(std::string name);
	~NinjaTrap();
	NinjaTrap	&operator=(const NinjaTrap&);

	private:

};

#endif