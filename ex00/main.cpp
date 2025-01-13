/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:37:06 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/20 10:13:17 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"
# include <new>

int main()
{
    Zombie z("Zombie");
    z.announce();

    Zombie *p = newZombie("heap");
    p->announce();

    randomChump("random");

    delete(p);
    // Zombie    *p = new (std::nothrow) Zombie[9000000000000000ul];
    // if (!p)
    //     std::cout << "Bad\n";
    // else
    //     std::cout << "Ok\n";
    return (0);
}
