/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 16:26:53 by lafontai          #+#    #+#             */
/*   Updated: 2020/06/26 17:50:09 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"

Human::Human()
{}
Human::~Human()
{}

const Brain	&Human::getBrain()
{
	return (_brain);
}

std::string	Human::identify()
{
	return (_brain.identify());
}