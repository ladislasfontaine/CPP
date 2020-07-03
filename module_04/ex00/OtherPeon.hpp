/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OtherPeon.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 16:14:37 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/02 16:22:28 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OTHERPEON_HPP
# define OTHERPEON_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class OtherPeon : public Victim {
	public:
		OtherPeon();
		OtherPeon(std::string name);
		OtherPeon(const OtherPeon &copy);
		~OtherPeon();

		OtherPeon	&operator=(const OtherPeon &copy);

		virtual void	getPolymorphed() const;

	private:
};

#endif
