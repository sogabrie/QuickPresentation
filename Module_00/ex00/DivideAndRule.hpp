#ifndef __DRIDEANDRULE_HPP__
#define __DRIDEANDRULE_HPP__

#include <iostream>
#include <vector>
#include <map>



class Bank
{
private:
	class Account
	{
	public:
		int	_id;
		int	_credit;
		int	_value;

		Account(const int id, const int value);

		const int &	getValue();
		const int &	getId();
		const int &	getCredit();

		friend std::ostream& operator << (std::ostream& p_os, const Account& p_account);
		// {
		// 	p_os << "[" << p_account._id << "] - [" << p_account._value << "]";
		// 	return (p_os);
		// }
	};
private:
	int _liquidity;
	// std::vector<Account *> clientAccounts;
	std::map<int, Account *> _clientAccounts;
public:
	Bank();
	~Bank();

	int &	operator[](int id);

	const int & getLiquidity();
	// const int & getClientAccounts();

	void	addAccaunt(const int id, int value);
	void	addMoney(const int id);
	void	getMoney(const int id, const int count);

	void	addCredit(const int id, const int count);
	void	deleetAccaunt(const int id);



	friend std::ostream& operator << (std::ostream& p_os, const Bank& p_bank);
	// {
	// 	p_os << "Bank informations : " << std::endl;
	// 	p_os << "Liquidity : " << p_bank.liquidity << std::endl;
	// 	for (auto &clientAccount : p_bank.clientAccounts)
    //     p_os << *clientAccount << std::endl;
	// 	return (p_os);
	// }
};

#endif