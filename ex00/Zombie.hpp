/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:30:06 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/20 10:14:05 by efarhat          ###   ########.fr       */
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
        Zombie(std::string);
        ~Zombie();
        void    announce( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
