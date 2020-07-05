/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 11:30:46 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/05 11:32:26 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure();
		Cure(const Cure &copy);
		~Cure();

		Cure	&operator=(const Cure &copy);

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

	private:
};

#endif
