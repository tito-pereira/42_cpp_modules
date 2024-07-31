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
#include "../include/Account.hpp"

/*
static int _nbAccounts;
static int _totalAmount;
static int _totalNbDeposits;
static int _totalNbWithdrawals;
*/

int Account::getNbAccounts(void) {
	return _nbAccounts;
} //static

int Account::getTotalAmount(void) {
	return _totalAmount;
} //static

int Account::getNbDeposits(void) {
	return _totalNbDeposits;
} //static

int Account::getNbWithdrawals(void) {
	return _totalNbWithdrawals;
} //static

/*
int _accountIndex;
int _amount;
int _nbDeposits;
int _nbWithdrawals;
*/

void	Account::_displayTimestamp(void) {
	std::cout << "[19920104_091532] " << std::flush;
}//static

int		Account::checkAmount(void) const {
	return this->_amount;
}

Account::Account(int initial_deposit) {
	//[19920104_091532] index:3;amount:432;created
	std::cout << "[19920104_091532] " << std::flush;
	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts += 1;
	std::cout << "index:" << this->_accountIndex << ';' << std::flush;
	this->_amount = initial_deposit;
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
	//[19920104_091532] index:4;amount:1245;closed
	std::cout << "[19920104_091532] " << std::flush;
	std::cout << "index:" << this->_accountIndex << ';' << std::flush;
	std::cout << "amount:" << this->_amount << ';' << std::flush;
	std::cout << "closed" << std::endl;
}

void	Account::displayStatus(void) const {
	//[19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
	this->_displaytimestamp();
	std::cout << "index:" << this->_accountIndex << ';' << std::flush;
	std::cout << "amount:" << this->_amount << ';' << std::flush;
	std::cout << "deposits:" << this->_nbDeposits << ';' << std::flush;
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos(void) {
	//[19920104_091532] accounts:8;total:12442;deposits:8;withdrawals:6
	_displaytimestamp();
	std::cout << "accounts:" << _nbAccounts << ';' << std::flush;
	std::cout << "total:" << _totalAmount << ';' << std::flush;
	std::cout << "deposits:" << _totalNbDeposits << ';' << std::flush;
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
} //static

void	Account::makeDeposit(int deposit) {
	//[19920104_091532] index:4;p_amount:1234;deposit:87;amount:1321;nb_deposits:1
	this->_displaytimestamp();
	std::cout << "index:" << this->_accountIndex << ';' << std::flush;
	std::cout << "amount:" << this->_amount << ';' << std::flush;
	std::cout << "deposit:" << deposit << ';' << std::flush;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_nbDeposits += 1;
	this->_totalNbDeposits += 1;
	std::cout << "amount:" << this->_amount; << ';' << std::flush;
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal) {
	//index, p_ammount, withdrawal, ammount, nb_withdrawal
	this->_displaytimestamp();
	std::cout << "index:" << this->_accountIndex << ';' << std::flush;
	std::cout << "amount:" << this->_amount << ';' << std::flush;
	if ((this->_amount - withdrawal) >= 0) {
		std::cout << "withdrawal:" << withdrawal << ';' << std::flush;
		this->_amount -= withdrawal;
		this->_totalAmount -= withdrawal; //Account::_totalAmount -= withdrawal;
		std::cout << "amount:" << this->_amount; << ';' << std::flush;
		this->_nbWithdrawals += 1;
		this->_totalNbWithdrawals += 1; //Account::_totalNbWithdrawals += 1;
		std::cout << "nb_withdrawal:" << this->_nbWithdrawals << std::endl;
	}
	else {
		std::cout << "withdrawal:refused" << std::endl;
		//std::cout << "amount:" << this->_amount; << ';' << std::flush;
		//std::cout << "nb_withdrawal:" << this->_totalNbWithdrawals << std::endl;
	}
}

/*
tenho 7 (ou 10) loops
1	index, ammount, created;							 	(constructor)
	account, total, deposits, withdrawals					(display account)
2	index, ammount, deposits, withdrawals					(display status)
3	index, p_ammount, deposit, ammount, nb_deposits			(make deposit)
	account, total, deposits, withdrawals					(display account)
4	index, ammount, deposits, withdrawals					(display status)
5	index, p_ammount, withdrawal, ammount, nb_withdrawal	(make withdrawal)
	account, total, deposits, withdrawals					(display account)
6	index, ammount, deposits, withdrawals					(display status)
7	index, ammount, closed; 								(destructor)

-----

- cria account classes com initial ammounts (localmente)
- cria int* e atribui os int individuais à função deposits
- cria int* e atribui os int individuais à função withdrawals
	. ha casos de erro para withdrawals (se tentares tirar mais q ammount acho)

1 display account infos
(display status?)
. make deposits
2 display account infos
(display status?)
. make withdrawal
3 display account infos
(display status?)

nao uso as "gets" para nada?
ok
private - acesso apenas dentro da propria classe (ou atraves de funções publicas da classe)
private static - acesso interno + funcoes static internas (gets + account infos)

make deposit, make withdrawal
-> acho que nao vao ter acesso direto as statics para adicionar
	(amount, deposits, withdrawals)

ou entao apenas tenho de aceder com "::" acho eu, nada demais
*/
