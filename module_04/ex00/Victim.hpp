/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 13:54:43 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/02 16:03:00 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim {
	public:
		Victim();
		Victim(std::string name);
		Victim(const Victim &copy);
		~Victim();

		Victim	&operator=(const Victim &copy);

		std::string	getName();
		virtual void	getPolymorphed() const;

	protected:
		std::string	_name;
};

std::ostream	&operator<<(std::ostream &out, Victim &obj);

#endif
