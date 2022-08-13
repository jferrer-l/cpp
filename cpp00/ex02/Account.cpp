/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 21:10:39 by jferrer-          #+#    #+#             */
/*   Updated: 2022/08/13 23:52:57 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void)
{
	std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
	std::time_t time_now = std::chrono::system_clock::to_time_t(now);
	tm utc_tm = *localtime(&time_now);
	std::cout << std::setfill('0') << "[" << (utc_tm.tm_year + 1900)
			<< std::setw(2) << utc_tm.tm_mon
			<< std::setw(2) << utc_tm.tm_mday << "_"
			<< std::setw(2) << utc_tm.tm_hour
			<< std::setw(2) << utc_tm.tm_min
			<< std::setw(2) << utc_tm.tm_sec << "] ";
}

int	Account::getNbAccounts(void){ return _nbAccounts; }
int	Account::getTotalAmount(void){ return _totalAmount; }
int	Account::getNbDeposits(void){ return _totalNbDeposits; }
int	Account::getNbWithdrawals(void){ return _totalNbWithdrawals; }

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount()
			<< ";deposits:" << getNbDeposits() << ";withdrawals:"
			<< getNbWithdrawals() << std::endl;
}

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_accountIndex = _nbAccounts;
	this->_nbAccounts++;
	_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:"
				<< initial_deposit << ";created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount() << ";closed" << std::endl;
	return;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << checkAmount();
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	std::cout << ";deposit:" << deposit << ";amount:" << checkAmount()
				<< ";nb_deposits:" << _nbDeposits << std::endl;
	return;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (_amount >= withdrawal)
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << checkAmount();
		this->_amount -= withdrawal;
		this->_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		this->_totalNbWithdrawals++;
		std::cout << ";withdrawal:" << withdrawal << ";amount:" << checkAmount()
					<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true;
	}
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << checkAmount()
				<< ";withdrawal:refused" << std::endl;
	//[19920104_091532] index:0;p_amount:47;withdrawal:refused
	return false;
}

int		Account::checkAmount(void) const{ return _amount; }
void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount()
				<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals
				<< std::endl;
	return;
}
