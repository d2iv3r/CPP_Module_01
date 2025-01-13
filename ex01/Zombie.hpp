/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:10:03 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/17 17:29:51 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <new>
# include <cstdlib>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        void setName(std::string &n);
        ~Zombie();
        void    announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif
