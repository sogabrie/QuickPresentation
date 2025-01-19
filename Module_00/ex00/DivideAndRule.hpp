#ifndef __DRIDEANDRULE_HPP__
#define __DRIDEANDRULE_HPP__

#include <iostream>
#include <vector>
#include <sstream>
#include <map>



class Bank
{
public:
	class Account
	{
	private:
		int	_id;
	public:
		Account();
		Account(int id);
		~Account();
		bool	operator==(const int id);
		bool	operator==(const int id) const;
		bool	operator==(const Account& other);

		bool	operator<(const int id);
		bool	operator<(const int id) const;
		bool	operator<(const Account& other) const;
		// bool	operator<(const Account other);

		const int &	getId() const;

		// friend std::ostream& operator << (std::ostream& p_os, const Account& p_account)
		// {
		// 	p_os << "[" << p_account.id << "] - [" << p_account.value << "]";
		// 	return (p_os);
		// }

	};
private:
	class Cash
	{
	private:
		int	_credit;
		int	_value;
	public:
		Cash();
		Cash(const int value);
		~Cash();
		const int &	getValue() const;
		const int &	getCredit() const;

		void editValur(const int value);
		void editCredit(const int credit);		
	};
private:
	// std::string					_name_bank;
	static int					_global_id; 
	int							_liquidity;
	std::map<Account, Cash>		_clientAccounts;

	// Bank(const Bank& other);
	// Bank &			operator=(const Bank& other);
public:
	// Bank();
	Bank(const int liquidity);
	~Bank();

	// const Account & const	operator[](int id) const;
	const Account &			operator[](int id);

	int						getLiquidity() const;
	void 					editLiquidity(int value);
	// const int & getClientAccounts();

	//Akaunti gorter
	void					addAccount(int cash);
	void					editMoneyClient(const int id, int cash);
	void					deleetAccaunt(const int id);
	void					addCredit(const int id, int cash);
	void					repaymentCredit(const int id, int cash);

	std::string				getInfoClient(const int id);
	std::string				getInfoAllcli();





	// friend std::ostream& operator << (std::ostream& p_os, const Bank& p_bank)
	// {
	// 	p_os << "Bank informations : " << std::endl;
	// 	p_os << "Liquidity : " << p_bank.liquidity << std::endl;
	// 	for (auto &clientAccount : p_bank.clientAccounts)
    //     p_os << *clientAccount << std::endl;
	// 	return (p_os);
	// }


};

#endif