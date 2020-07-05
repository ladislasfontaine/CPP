/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 16:10:05 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/05 17:02:58 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i(0); i < 4; i++)
		_materias[i] = 0;
}

MateriaSource::~MateriaSource() {
}

MateriaSource::MateriaSource(const MateriaSource &copy) {
	*this = copy;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &copy) {
	for (int i(0); i < 4; i++) {
		_materias[i] = copy._materias[i];
	}
	return (*this);
}

void		MateriaSource::learnMateria(AMateria* m) {
	for (int i(0); i < 4; i++) {
		if (!_materias[i]) {
			_materias[i] = m;
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	for (int i(0); i < 4; i++) {
		if (_materias[i] && _materias[i]->getType() == type) {
			return (_materias[i]->clone());
		}
	}
	return (0);
}
