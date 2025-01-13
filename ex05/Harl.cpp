/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 19:45:43 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/17 15:11:57 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    complainPtr[0] = &Harl::debug;
    complainPtr[1] = &Harl::info;
    complainPtr[2] = &Harl::warning;
    complainPtr[3] = &Harl::error;
}

Harl::~Harl()
{
}

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my";
    std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!";
    std::cout << std::endl;
}
void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put";
    std::cout << "enough bacon in my burger! If you did, I wouldn’t be asking for more!";
    std::cout << std::endl;
}

void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for";
    std::cout << "years whereas you started working here since last month.";
    std::cout << std::endl;
}

void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now.";
    std::cout << std::endl;
}

void Harl::complain( std::string level )
{
    std::string levels[4] = { DEB, INF, WRN, ERR };
    int         i;

    for (i = 0; i < 4; i++)
    {
        if (!level.compare(levels[i]))
        {
            (this->*complainPtr[i])();
            return ;
        }
    }
    std::cout << "Unknown level!" << std::endl;
}
