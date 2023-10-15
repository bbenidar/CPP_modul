/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:34:01 by bbenidar          #+#    #+#             */
/*   Updated: 2023/10/14 17:10:50 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Account.hpp"
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
#include <ctime>


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;



void ft_print_time()
{
    std::time_t currentTime = std::time(nullptr);
    std::tm* localTime = std::localtime(&currentTime);

    char formTime[16];
    std::strftime(formTime, sizeof(formTime), "%Y%m%d_%H%M%S", localTime);

    std::cout <<  formTime ;
}

Account::Account(int initial_deposit):
_amount(initial_deposit),
_nbDeposits(0)
{
    ft_print_time();
    std::cout <<" index:" << _nbAccounts << ";amount:" << initial_deposit << ";created" << std::endl;
    _accountIndex = _nbAccounts++;
    _totalAmount += initial_deposit;
    
}

Account::~Account()
{
    ft_print_time();
    std::cout <<" index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int Account::getNbAccounts(void)
{
    return (_nbAccounts);
}
int Account::getTotalAmount()
{
    return (_totalAmount);
}
int Account::getNbDeposits()
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
    return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos()
{
    ft_print_time();
    std :: cout << " accounts:" << getNbAccounts() <<
    ";total:" << getTotalAmount() << 
    ";deposits:" << getNbDeposits() << 
     ";withdrawals:"<< getNbWithdrawals() << std::endl;
     
}

void Account::makeDeposit(int deposit)
{
    _totalAmount += deposit;
    _amount += deposit;
    ft_print_time();
        std :: cout << " index:" << _accountIndex <<
        ";p_amount:" << _amount - deposit << 
            ";deposit:" << deposit << 
                ";amount:" << _amount <<
                    ";nb_deposits:"<< ++_nbDeposits << std::endl;
        _totalNbDeposits++;
}

bool Account::makeWithdrawal( int withdrawal)
{
    _amount -= withdrawal;
    if (checkAmount())
    {
        ft_print_time();
        std :: cout << " index:" << _accountIndex <<
            ";p_amount:" << _amount + withdrawal <<
                ";withdrawal:" << withdrawal << 
                ";amount:"<< _amount << 
                        ";nb_withdrawals:" << ++_nbWithdrawals <<std::endl;
                _totalNbWithdrawals++;
        return (true);
    }
    else
    {
        _amount += withdrawal;
        ft_print_time();
        std :: cout << " index:" << _accountIndex <<
            ";p_amount:" << _amount + withdrawal <<
                ";withdrawal:refused"  <<std::endl;
        return(false);
    }
}

int Account::checkAmount(void) const
{
    if (_amount > 0)
       return (1);
    else
        return (0);
}

void Account::displayStatus(void) const
{
    ft_print_time();
    std :: cout << " index:" << _accountIndex <<
        ";amount:" << _amount << 
            ";deposits:" << _nbDeposits << 
                ";withdrawals:"<< _nbWithdrawals << std::endl;
    
}