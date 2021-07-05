/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 20:54:04 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/05 14:30:08 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include "Victim.hpp"
# include <iostream>

class Sorcerer {
    private:
        std::string _name;
        std::string _title;
        Sorcerer();
    public:
        Sorcerer(std::string name, std::string title);
        Sorcerer(Sorcerer const & rhs);
        virtual ~Sorcerer();
        Sorcerer & operator=(Sorcerer const & rhs);
        
        void polymorph(Victim const & target) const;

        /* Settlers */
        void setName(std::string name);
        void setTitle(std::string title);

        /* Getters */
        std::string getName(void) const;
        std::string getTitle(void) const;
        
};

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs);


#endif  