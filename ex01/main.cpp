/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:10:48 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/17 12:39:37 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main()
{
    int i;
    int n;

    n = 5;
    Zombie *z = zombieHorde(n, "zombiesss");
    for (i = 0; i < n; i++)
        z[i].announce();
    delete [] z;
    return (0);
}
