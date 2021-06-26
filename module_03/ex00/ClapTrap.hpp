/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:16:54 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/26 21:08:18 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
	private:
		std::string 	_name;
		unsigned int 	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap & operator=(ClapTrap const & rhs);

		void attack(std::string & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void setDamage(unsigned int amount);
		void setEnergyPoints(unsigned int amount);

		const std::string 	& getname(void) const;
		const unsigned int 	& gethitPoints(void) const;
		const unsigned int 	& getenergyPoints(void) const;
		const unsigned int 	& getattackDamage(void) const;
};

#endif 