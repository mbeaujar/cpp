/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 20:54:04 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/27 21:15:23 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>

class Sorcerer {
    private:
        std::string _name;
        std::string _title;
    public:
        Sorcerer();
        Sorcerer(std::string name, std::string title);
        Sorcerer(Sorcerer const & rhs);
        ~Sorcerer();
        Sorcerer & operator=(Sorcerer const & rhs);

        /* Settlers */
        void setName(std::string name);
        void setTitle(std::string title);

        /* Getters */
        std::string getName(void) const;
        std::string getTitle(void) const;
           
};
#endif 