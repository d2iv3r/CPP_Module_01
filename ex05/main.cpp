/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:46:22 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/17 15:17:34 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int main()
{
    Harl    test;

    test.complain("DEBUG");
    std::cout << std::endl;
    test.complain("INFO");
    std::cout << std::endl;
    test.complain("WARNING");
    std::cout << std::endl;
    test.complain("ERROR");
    return 0;
}
