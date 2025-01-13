/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:12:57 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/17 12:37:09 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zoms;
    int     i;

    zoms = new (std::nothrow) Zombie[N];
    if (!zoms)
    {
        std::cout << "Error Allocation!" << std::endl;
        exit(1);
    }
    for (i = 0; i < N; i++)
        zoms[i].setName(name);
    return (zoms);
}
