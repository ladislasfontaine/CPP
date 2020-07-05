/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 10:49:06 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/05 17:03:27 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {
	public:
		AMateria(std::string const & type);
		AMateria();
		AMateria(const AMateria &copy);
		virtual ~AMateria();

		AMateria	&operator=(const AMateria &copy);

		std::string const &	getType() const;
		unsigned int		getXP() const;
		void				setType(std::string const type);
		void				setXP(unsigned int xp);
		void				increaseXP();
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);

	private:
		std::string		_type;
		unsigned int	_xp;
};

#endif
