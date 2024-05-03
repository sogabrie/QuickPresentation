#ifndef __DRIDEANDRULE_HPP__
#define __DRIDEANDRULE_HPP__

#include <iostream>
#include <vector>

struct Account
{
	int id;
	int value;


	Account() :
		id(-1),
		value(0)
	{
	
	}

	friend std::ostream& operator << (std::ostream& p_os, const Account& p_account)
	{
		p_os << "[" << p_account.id << "] - [" << p_account.value << "]";
		return (p_os);
	}
};

struct Bank
{
	int liquidity;
	std::vector<Account *> clientAccounts;

	Bank() :
		liquidity(0)
	{

	}

	friend std::ostream& operator << (std::ostream& p_os, const Bank& p_bank)
	{
		p_os << "Bank informations : " << std::endl;
		p_os << "Liquidity : " << p_bank.liquidity << std::endl;
		for (auto &clientAccount : p_bank.clientAccounts)
        p_os << *clientAccount << std::endl;
		return (p_os);
	}
};

#endif