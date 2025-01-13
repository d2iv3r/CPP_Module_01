/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:55:50 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/17 15:12:00 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

# define DEB "DEBUG"
# define INF "INFO"
# define WRN "WARNING"
# define ERR "ERROR"

class Harl
{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
        void (Harl::*complainPtr[4])(void);
    public:
        Harl();
        ~Harl();
        void complain( std::string level );
};

#endif
