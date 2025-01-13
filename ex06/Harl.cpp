/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:54:20 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/17 17:56:54 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(std::string lvl)
{
    std::string levels[4] = { DEB, INF, WRN, ERR };
    int i;

    this->level = -1;
    for (i = 0; i < 4; i++)
    {
        if (!lvl.compare(levels[i]))
        {
            this->level = i;
            break ;
        }
    }
    this->complain();
}

Harl::~Harl()
{
}

void Harl::debug( void )
{
    std::cout << "[ " << DEB << " ]" << std::endl;
    std::cout << "I love having extra bacon for my";
    std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!";
    std::cout << std::endl;
}
void Harl::info( void )
{
    std::cout << "[ " << INF << " ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put";
    std::cout << "enough bacon in my burger! If you did, I wouldn’t be asking for more!";
    std::cout << std::endl;
}

void Harl::warning( void )
{
    std::cout << "[ " << WRN << " ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for";
    std::cout << "years whereas you started working here since last month.";
    std::cout << std::endl;
}

void Harl::error( void )
{
    std::cout << "[ " << ERR << " ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now.";
    std::cout << std::endl;
}

void Harl::complain( void )
{
    switch (this->level)
    {
        case 0:
            debug();
            std::cout << std::endl;
        case 1:
            info();
            std::cout << std::endl;
        case 2:
            warning();
            std::cout << std::endl;
        case 3:
            error();
            std::cout << std::endl;
        break;
    default:
        std::cout << "Probably complaining about insignificant problems" << std::endl;
    }
}
