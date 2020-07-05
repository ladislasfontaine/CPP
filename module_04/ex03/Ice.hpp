/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 11:13:50 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/05 11:30:39 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice();
		Ice(const Ice &copy);
		~Ice();

		Ice	&operator=(const Ice &copy);

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

	private:
};

#endif
