/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 18:24:07 by bbenidar          #+#    #+#             */
/*   Updated: 2024/08/21 15:20:11 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
    *this = other;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if (this != &other)
    {
        _filename = other._filename;
    }
    return *this;
}

BitcoinExchange::BitcoinExchange(std::string filename)
{
    _filename = filename;
    std::map<int, float> btcValues;
    std::ifstream dbFile("data.csv");
    if (!dbFile.is_open())
    {
        std::cerr << "Error: database error" << std::endl;
        return ;
    }
    std::ifstream file(filename);
    if (!file.is_open())
    {
        std::cerr << "Error: file not found" << std::endl;
        return ;
    }
    std::string dbLine;
    std::getline(dbFile, dbLine);
    float dbValue;
    while (std::getline(dbFile, dbLine))
    {
        std::string dbDate = dbLine.substr(0, dbLine.find(","));
        try
        {
            dbValue = std::atof(dbLine.substr(dbLine.find(",") + 1).c_str());
        }
        catch(const std::exception& e)
        {
            std::cerr << "Database Error : " << e.what() << '\n';
            return ;
        }
        int days = printDateAsdays(dbDate);
        if (days == -1)
        {
            std::cerr << "Database Error: bad input => " << dbLine << std::endl;
            return ;   
        }
        btcValues[days] = dbValue;
    }
    

    
    std::string line;
    std::string date;
    std::string val;
    std::getline(file, line);
    while (std::getline(file, line))
    {  
        if (line.find("|") != std::string::npos)
        {
            date = line.substr(0, line.find("|"));
            val = line.substr(line.find("|") + 1);
            if (valChecker(val) == 1)
                continue;
            if (date[date.size() - 1] == ' ')
                    date = date.substr(0, date.size() - 1);
            int days = printDateAsdays(date);
            if (days == -1)
            {
                std::cerr << "Error: bad input => " << line << std::endl;
                continue;
            }
            float value;
            if (btcValues.find(days) == btcValues.end()) {
                std::map<int, float>::iterator it = btcValues.lower_bound(days);
                if (it == btcValues.begin()) {
                    value = it->second * std::atof(val.c_str());
                    std::cout << date << " => "<< std::atof(val.c_str()) << " = " << value << std::endl;
                } else {
                    --it;
                    value = it->second * std::atof(val.c_str());
                    std::cout << date << " => "<< std::atof(val.c_str()) << " = " << value << std::endl;
                }
            } else {
                value = btcValues[days] * std::atof(val.c_str());
                std::cout << date << " => "<< std::atof(val.c_str()) << " = " << value << std::endl;
            }
        }
        else
        {
            std::cerr << "Error: bad input => " << line << std::endl;
        } 
    }
}

BitcoinExchange::~BitcoinExchange()
{
}

int BitcoinExchange::printDateAsdays(std::string &date)
{
    date.erase(date.find_last_not_of(" \n\r\t")+1);
    date.erase(0, date.find_first_not_of(" \n\r\t"));
    if (date.size() != 10)
    {
        return -1;
    }
    std::string year = date.substr(0, 4);
    std::string month = date.substr(5, 2);
    std::string day = date.substr(8, 2);
    int yearInt = std::atoi(year.c_str());
    int monthInt = std::atoi(month.c_str());
    int dayInt = std::atoi(day.c_str());
    if (yearInt < 0 || monthInt < 0 || monthInt > 12 || dayInt < 0 || dayInt > 31 || date[4] != '-' || date[7] != '-')
    {
        return -1;
    }
    if (monthInt == 2 && ((dayInt > 29 && yearInt % 4 == 0) || (dayInt > 28 && yearInt % 4 != 0)))
    {
        return -1;
    }
    if ((monthInt == 4 || monthInt == 6 || monthInt == 9 || monthInt == 11) && dayInt > 30)
    {
        return -1;
    }
    int days = yearInt * 365 + monthInt * 30 + dayInt;
    return days;
}

bool isDouble(std::string myString)
{
    bool dot = false;
    myString.erase(myString.find_last_not_of(" \n\r\t")+1);
    myString.erase(0, myString.find_first_not_of(" \n\r\t"));
    for (size_t i = 0; i < myString.size(); i++)
    {
        if (myString[i] == '.')
        {
            if (dot == true)
                return false;
            dot = true;
        }
        else
        if (isdigit(myString[i]) == false && myString[i] != '.')
            return false;
    }
    return true;
}

int BitcoinExchange::valChecker(std::string value)
{
    try
    {
        if (isDouble(value) == 0)
        {
            std::cout << "Error: not a positive number" << std::endl;
            return 1;
        }
        float floatValue = std::atof(value.c_str());
        if (floatValue < 0)
        {
            std::cout << "Error: not a positive number" << std::endl;
            return 1;
        }
        if (floatValue >= 0 && floatValue <= 1000)
        {
            return 0;
        }
        else
        {
            std::cout << "Error: too large a number." << std::endl;
            return 1;
        }
       
    }
    catch (const std::exception &e)
    {
        try
        {
            int intValue = std::atoi(value.c_str());
            if (intValue < 0)
            {
                std::cout << "Error: not a positive number" << std::endl;
                return 1;
            }
            if (intValue >= 0 && intValue <= 1000)
                return 0;
            else
                std::cout << "Error: too large a number." << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << value << "Error: is not a positive number" << std::endl;
            return 1;
        }
    }
    return 1;
}
