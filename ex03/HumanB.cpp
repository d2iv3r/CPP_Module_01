/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:43:56 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/17 12:55:48 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string n) : name(n), weapon(NULL)
{
}

HumanB::HumanB(std::string n, Weapon &weap) : name(n), weapon(&weap)
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &weap)
{
    this->weapon = &weap;
}

void HumanB::attack()
{
    if (!weapon)
        return ;
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
};
