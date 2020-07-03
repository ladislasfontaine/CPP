/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 12:37:38 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/02 16:02:33 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer {
	public:
		Sorcerer();
		Sorcerer(std::string name, std::string title);
		Sorcerer(const Sorcerer &copy);
		~Sorcerer();

		Sorcerer		&operator=(const Sorcerer &copy);

		std::string		getName();
		std::string		getTitle();
		void			polymorph(Victim const &) const;

	private:
		std::string	_name;
		std::string	_title;
};

std::ostream	&operator<<(std::ostream &out, Sorcerer &obj);

#endif
