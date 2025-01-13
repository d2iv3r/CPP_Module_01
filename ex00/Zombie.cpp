/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:32:04 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/17 14:56:21 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string n )
{
    name = n;
    std::cout << "Constructor called for : " << name << std::endl;
};

Zombie::~Zombie()
{
    std::cout << "Destructor called! for : " << name << std::endl;
};

void Zombie::announce( void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
};
