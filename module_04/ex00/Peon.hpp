/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 12:37:38 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/02 16:02:50 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon : public Victim {
	public:
		Peon();
		Peon(std::string name);
		Peon(const Peon &copy);
		~Peon();

		Peon	&operator=(const Peon &copy);

		virtual void	getPolymorphed() const;

	private:
};

#endif
