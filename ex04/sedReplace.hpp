/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sedReplace.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:54:09 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/17 17:33:32 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEDREPLACE_HPP
#define SEDREPLACE_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <cstdlib>

class SedReplace
{
    private:
        std::string     file;
        std::ifstream   inFile;
        std::string     content;
        std::string     s1;
        std::string     s2;
        void replace();
    public:
        SedReplace(std::string f, std::string _s1, std::string _s2);
        ~SedReplace();
};

#endif
