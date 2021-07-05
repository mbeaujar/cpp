/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 15:20:32 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/05 14:27:18 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

class Karen {
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        Karen();
        virtual ~Karen();

        void complain( std::string level );
        
};

#endif