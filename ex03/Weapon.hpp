/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:41:48 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/17 12:50:16 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon();
        Weapon(std::string typ);
        ~Weapon();
        const std::string &getType();
        void setType(std::string typ);
};

#endif
