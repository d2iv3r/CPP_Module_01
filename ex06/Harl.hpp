/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:51:25 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/16 17:13:59 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

# define DEB "DEBUG"
# define INF "INFO"
# define WRN "WARNING"
# define ERR "ERROR"

class Harl
{
    private:
        int level;
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        Harl(std::string lvl);
        ~Harl();
        void complain( void );
};

#endif
