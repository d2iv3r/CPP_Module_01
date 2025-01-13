/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sedReplace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:55:08 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/17 17:46:30 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "sedReplace.hpp"

SedReplace::SedReplace(std::string f, std::string _s1, std::string _s2)
{
    char tmp;

    file = f;
    inFile.open(file.c_str());
    if (inFile.fail())
    {
        std::cout << "Error: Invalid file!" << std::endl;
        exit(EXIT_FAILURE);
    }
    while (inFile.get(tmp))
        content += tmp;
    inFile.close();
    s1 = _s1;
    s2 = _s2;
    this->replace();
}

void SedReplace::replace()
{
    std::ofstream outfile;
    std::size_t pos;
    std::string fileo;

    fileo = file.append(".replace");
    outfile.open(fileo.c_str());
    if (outfile.fail())
    {
        std::cout << "Error: opening file!" << std::endl;
        exit(EXIT_FAILURE);
    }
    if (s1.empty())
    {
        outfile << content;
        outfile.close();
        return ;
    }
    pos = this->content.find(s1);
    while (pos != std::string::npos)
    {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos = this->content.find(s1, pos + s2.length());
    }
    outfile << content;
    outfile.close();
}

SedReplace::~SedReplace()
{
}
