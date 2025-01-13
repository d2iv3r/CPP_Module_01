/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:46:59 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/17 12:53:59 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon()
{
};

Weapon::Weapon(std::string typ) : type(typ)
{
};

Weapon::~Weapon()
{
};

const std::string& Weapon::getType()
{
    return (this->type);
};

void Weapon::setType(std::string typ)
{
    this->type = typ;
};
