/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:54:13 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/20 10:14:09 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *z = new (std::nothrow) Zombie(name);
    if (!z)
    {
        std::cout << "Zombie Not allocated!" << std::endl;
        exit(1);
    }
    return (z);
};
