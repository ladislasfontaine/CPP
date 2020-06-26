/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 16:03:33 by lafontai          #+#    #+#             */
/*   Updated: 2020/06/26 17:27:50 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain
{
	public:
	Brain();
	~Brain();
	std::string	identify() const;
	void		printAttributes() const;

	private:
	std::string	_name;
	int			_size;
};

#endif