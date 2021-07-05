/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 18:21:29 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/05 14:28:28 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <iostream>

class ZombieEvent {
	private:
		std::string _type;
	public:	
		ZombieEvent();
		virtual ~ZombieEvent();

		Zombie * newZombie(std::string name);
		void setZombieType(std::string type);
};


# endif