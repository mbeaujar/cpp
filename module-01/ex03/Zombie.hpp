/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 18:21:03 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/23 21:17:41 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
	private:
		std::string	_type;
		std::string _name;

	public:	
		Zombie();
		Zombie(std::string const name, std::string const type);
		~Zombie();

		void announce() const;
		void setZombieType(std::string type);
		void setZombieName(std::string name);
};

#endif 