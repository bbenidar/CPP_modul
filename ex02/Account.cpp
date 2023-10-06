/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:34:01 by bbenidar          #+#    #+#             */
/*   Updated: 2023/10/06 21:13:11 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Account.hpp"
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


Account::Account(int initial_deposit):
_amount(initial_deposit)
{
    std::cout << "[19920104_091532] " <<"index:" << _nbAccounts << ";amount:" << initial_deposit << ";created" << std::endl;
    _accountIndex = _nbAccounts++;
    _totalAmount += initial_deposit;
}

Account::~Account()
{
    
}

int Account::getNbAccounts(void)
{
    return (0);
}
int Account::getTotalAmount()
{
    return (0);
}
int Account::getNbDeposits()
{
    return (0);
}

int Account::getNbWithdrawals()
{
    return (0);
}

void Account::displayAccountsInfos()
{
    std :: cout << "[19920104_091532] " << "accounts:" << _nbAccounts <<
    ";total:" << _totalAmount << 
    ";deposits:" << _totalNbDeposits << 
     ";withdrawals:"<< _totalNbWithdrawals << std::endl;
     
}

void Account::makeDeposit(int deposit)
{
    _amount += deposit; 
        std :: cout << "[19920104_091532] " << "index:" << _accountIndex <<
        ";p_amount:" << _amount - deposit << 
            ";deposit:" << deposit << 
                ";amount" << _amount <<
                    ";nb_deposits:"<< ++_totalNbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawal)
{
    return (0);
}

int Account::checkAmount(void) const
{
    return (0);
}

void Account::displayStatus(void) const
{
    std :: cout << "[19920104_091532] " << "index:" << _accountIndex <<
        ";amount:" << _amount << 
            ";deposits:" << _totalNbDeposits << 
                ";withdrawals:"<< _totalNbWithdrawals << std::endl;
    
}