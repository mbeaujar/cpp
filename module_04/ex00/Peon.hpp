/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 14:09:19 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/28 14:20:05 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
# define PEON_H

# include <iostream>
# include "Victim.hpp"

class Peon : public Victim {
    private:
        Peon();
    public:
        Peon(std::string name);
        Peon(Peon const & rhs);
        ~Peon();
        Peon & operator=(Peon const & rhs);

        void getPolymorphed() const;
        /* Settlers */
        void setName(std::string name);
        /*  Getters */
        std::string getName() const;
        
};


#endif