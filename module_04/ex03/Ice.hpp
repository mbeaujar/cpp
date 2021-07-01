/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 22:19:53 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/01 22:22:09 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>

class Ice {
    private:
    
    public:
        Ice();
        Ice(Ice const & copy);
        ~Ice();
        Ice & operator=(Ice const & copy);
};

#endif