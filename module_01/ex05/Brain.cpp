/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 16:07:35 by lafontai          #+#    #+#             */
/*   Updated: 2020/06/26 17:28:02 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <sstream>
#include <iostream>
#include "Brain.hpp"

Brain::Brain() : _name("the_brain"), _size(5)
{}
Brain::~Brain()
{}

std::string	Brain::identify() const
{
	std::stringstream ss;
	ss << this;
	return (ss.str());
}

void		Brain::printAttributes() const
{
	std::cout << "Brain name: " << _name << std::endl << "Size: " << _size << std::endl;
}
