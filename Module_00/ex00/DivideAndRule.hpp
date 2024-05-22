#ifndef __DRIDEANDRULE_HPP__
#define __DRIDEANDRULE_HPP__

#include <iostream>
#include <vector>
#include <map>



class Bank
{
public:
	class Account
	{
	private:
		int	_id;
		Account(const Account & other);
		Account & operator=(const Account & other);
	public:
		Account(const int id);
		bool	operator==(const Account& other);
		const int &	getId() const;

		// friend std::ostream& operator << (std::ostream& p_os, const Account& p_account);
		// {
		// 	p_os << "[" << p_account._id << "] - [" << p_account._value << "]";
		// 	return (p_os);
		// }
	};
private:
	class Funds
	{
	private:
		int	_credit;
		int	_value;
	public:
		Funds(const int value);
		const int &	getValue() const;
		const int &	getCredit() const;

		void setValur(const int& value);
		void setCredit(const int& credit);		
	};
private:
	int _liquidity;
	// std::vector<Account *> clientAccounts;
	std::map<Account, Funds *> _clientAccounts;

	Bank(const Bank& other);
	Bank &			operator=(const Bank& other);
public:
	Bank();
	Bank(const int& liquidity);
	~Bank();

	Account & const	operator[](int id);
	Account &		operator[](int id);

	const int & 	getLiquidity() const;
	// const int & getClientAccounts();

	void			addAccount(const int id, int value);
	void			addMoney(const int id);
	void			getMoney(const int id, const int count);

	void			addCredit(const int id, const int count);
	void			deleetAccaunt(const int id);



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