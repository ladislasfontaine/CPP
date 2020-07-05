/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 10:35:39 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/05 10:09:29 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : _count(0), _marines(0) {
}

Squad::~Squad() {
	t_marine_lst*	element;

	while (_marines) {
		element = _marines;
		_marines = _marines->next;
		delete element->marine;
		delete element;
	}
}

Squad::Squad(const Squad &copy) {
	*this = copy;
}

Squad	&Squad::operator=(const Squad &copy) {
	t_marine_lst*	element;
	t_marine_lst*	marines;
	marines = _marines;
	while (marines) {
		element = marines;
		marines = marines->next;
		delete element->marine;
		delete element;
	}
	ISpaceMarine*	tmp;
	_marines = 0;
	for (int i(0); i < copy.getCount(); i++) {
		tmp = 0;
		tmp = copy.getUnit(i)->clone();
		this->push(tmp);
	}
	_count = copy.getCount();
	return (*this);
}

int				Squad::getCount() const {
	return (_count);
}

ISpaceMarine*	Squad::getUnit(int index) const {
	t_marine_lst*	marines;
	int				i(0);

	marines = _marines;
	if (!marines)
		return (0);
	while (marines && i < index) {
		i++;
		marines = marines->next;
	}
	return (marines->marine);
}

int				Squad::push(ISpaceMarine* marine) {
	t_marine_lst*	marines;
	t_marine_lst*	element;

	if (!marine)
		return (1);
	element = new t_marine_lst;
	element->marine = marine;
	element->next = 0;
	_count++;
	marines = _marines;
	while (marines && marines->next) {
		if (marines->marine == element->marine) {
			delete element;
			return (1);
		}
		marines = marines->next;
	}
	if (!_marines)
		_marines = element;
	else if (!marines->next)
		marines->next = element;
	return (0);
}
