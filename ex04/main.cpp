/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:52:40 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/17 11:11:07 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "sedReplace.hpp"

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cout << "Error: Invalid arguments!" << std::endl;
        return (1);
    }
    SedReplace rep(argv[1], argv[2], argv[3]);
    return (0);
}
