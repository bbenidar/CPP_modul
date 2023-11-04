/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:36:11 by bbenidar          #+#    #+#             */
/*   Updated: 2023/11/02 21:07:28 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<fstream>
#include<string>

int main(int ac, char **av)
{
    if(ac != 4)
        return std::cout << "Incorrect number of arguments" << std::endl, 1;
    else
    {
        std::string s1 = av[2];
        std::string s2 = av[3];
        std::string FileName = av[1];
        std::string repFileName = FileName + ".replace";

        std::ifstream Filein(FileName);
        if (!Filein.is_open())
            return(std::cout << "File not found" << std::endl, 1);

        std::ofstream Filerep(repFileName);
        if (!Filerep.is_open())
            return(std::cout << "File not found" << std::endl, 1);

        std::string line;
        std::string buf;
        while (std::getline(Filein, line))
        {
            buf.append(line);
            if(!Filein.eof())
                buf.append("\n");
        }
        size_t indx = 0;
        if (s1.compare(s2) != 0)
        {
            while(((indx = buf.find(s1, indx)) != std::string::npos) && s1.length())
            {
                std::string tmp = buf.substr(indx + s1.length(), buf.length());
                buf = buf.substr(0, indx);
                buf.append(s2);
                buf.append(tmp);
                indx += s2.length();
            }
        }
        Filerep<< buf;
        Filein.close();
        Filerep.close();
    }
}
