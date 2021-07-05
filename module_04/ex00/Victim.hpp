/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 12:02:33 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/05 14:30:13 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#  define VICTIM_HPP

# include <iostream>

class Victim {
    protected:
        std::string _name;
    public:
        Victim();
        Victim(std::string name);
        Victim(Victim const & rhs);
        virtual ~Victim();
        Victim & operator=(Victim const & rhs);

        virtual void getPolymorphed() const;
        /* Settlers */
        void setName(std::string name);

        /* Getters */
        std::string getName() const;
};

std::ostream & operator<<(std::ostream & o, Victim const & rhs);

#endif 
