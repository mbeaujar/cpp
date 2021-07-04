/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 15:20:32 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/04 16:32:48 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

class Karen {
    private:
    public:
        Karen();
        ~Karen();

        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
        void complain( std::string level );
        
};

#endif