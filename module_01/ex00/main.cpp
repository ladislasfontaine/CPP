/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 10:11:34 by lafontai          #+#    #+#             */
/*   Updated: 2020/06/26 10:52:00 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdio.h>
#include "Pony.hpp"

void	ponyOnTheStack(void)
{
	Pony	pony1;

	Pony::printTotalPonies();
	pony1.printPony();
	pony1.changePonyAge(42);
	pony1.printPony();
}

void	ponyOnTheHeap(void)
{
	Pony	*pony2 = new Pony("Max", 99, true);

	if (!pony2) {
		std::cout << "Memory allocation failed" << std::endl;
	} else {
		Pony::printTotalPonies();
		pony2->printPony();
		pony2->changePonyAge(98);
		pony2->printPony();
		delete pony2;
	}
}

int		main(void)
{
	std::cout << "===== ON STACK =====" << std::endl;
	ponyOnTheStack();
	Pony::printTotalPonies();
	std::cout << "===== ON HEAP ======" << std::endl;
	ponyOnTheHeap();
	Pony::printTotalPonies();
	getchar();
	return (0);
}
