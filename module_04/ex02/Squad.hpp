/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 10:35:39 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/03 11:07:25 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include "ISquad.hpp"

class Squad : public ISquad {

	typedef struct	s_marine_lst {
		ISpaceMarine*			marine;
		struct s_marine_lst*	next;
	}				t_marine_lst;

	public:
		Squad();
		Squad(const Squad &copy);
		~Squad();

		Squad	&operator=(const Squad &copy);

		int				getCount() const;
		ISpaceMarine*	getUnit(int) const;
		int				push(ISpaceMarine*);

	private:
		int				_count;
		t_marine_lst*	_marines;
};

#endif
