/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:42:06 by marvin            #+#    #+#             */
/*   Updated: 2024/07/31 15:42:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void) {
	return _nbAccounts;
}

int Account::getTotalAmount(void) {
	return _totalAmount;
}

int Account::getNbDeposits(void) {
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
	return _totalNbWithdrawals;
}

void	Account::_displayTimestamp(void) {
	std::cout << "[19920104_091532] " << std::flush;
}

int		Account::checkAmount(void) const {
	return this->_amount;
}

Account::Account(int initial_deposit) {
	std::cout << "[19920104_091532] " << std::flush;
	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts += 1;
	std::cout << "index:" << this->_accountIndex << ';' << std::flush;
	this->_amount = initial_deposit;
	this->_totalAmount += initial_deposit;
	std::cout << "amount:" << this->_amount << ';' << std::flush;
	std::cout << "created" << std::endl;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
}

Account::Account(void) {
	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts += 1;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
}

Account::~Account(void) {
	std::cout << "[19920104_091532] " << std::flush;
	std::cout << "index:" << this->_accountIndex << ';' << std::flush;
	std::cout << "amount:" << this->_amount << ';' << std::flush;
	std::cout << "closed" << std::endl;
}

void	Account::displayStatus(void) const {
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';' << std::flush;
	std::cout << "amount:" << this->_amount << ';' << std::flush;
	std::cout << "deposits:" << this->_nbDeposits << ';' << std::flush;
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ';' << std::flush;
	std::cout << "total:" << _totalAmount << ';' << std::flush;
	std::cout << "deposits:" << _totalNbDeposits << ';' << std::flush;
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit) {
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';' << std::flush;
	std::cout << "p_amount:" << this->_amount << ';' << std::flush;
	std::cout << "deposit:" << deposit << ';' << std::flush;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_nbDeposits += 1;
	this->_totalNbDeposits += 1;
	std::cout << "amount:" << this->_amount << ';' << std::flush;
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal) {
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';' << std::flush;
	std::cout << "p_amount:" << this->_amount << ';' << std::flush;
	if ((this->_amount - withdrawal) > 0) {
		std::cout << "withdrawal:" << withdrawal << ';' << std::flush;
		this->_amount -= withdrawal;
		this->_totalAmount -= withdrawal;
		std::cout << "amount:" << this->_amount << ';' << std::flush;
		this->_nbWithdrawals += 1;
		this->_totalNbWithdrawals += 1;
		std::cout << "nb_withdrawal:" << this->_nbWithdrawals << std::endl;
		return true;
	}
	else {
		std::cout << "withdrawal:refused" << std::endl;
		return false;
	}
}
