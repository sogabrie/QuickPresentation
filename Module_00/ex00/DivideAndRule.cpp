#include "DivideAndRule.hpp"

Bank::Account::Account(const int id) : _id(id) {}

Bank::Account::Account(const Account & other) 
{
	this->_id = other._id;
}

Bank::Account &Bank::Account::operator=(const Account &other)
{
	this->_id = other._id;
	return *this;
}

bool Bank::Account::operator==(const Bank::Account &other)
{
	return this->_id == other._id;
}

const int &Bank::Account::getId() const
{
	return this->_id;
}

Bank &Bank::operator=(const Bank &other)
{
	(void)other;
	return *this;
}

Bank::Bank(const Bank &other)
{
	(void)other;
}

Bank::Bank() : _liquidity(0)
{
}

Bank::Bank(const int &liquidity) : _liquidity(liquidity)
{
}

Bank::~Bank()
{
	for ( std::map<Account, Funds *>::iterator it = this->_clientAccounts.begin(); it != this->_clientAccounts.end(); ++it)
	{
		delete it->second;
	}
}

Bank::Account &const Bank::operator[](int id)
{
	// return nullptr;
}

Bank::Account & Bank::operator[](int id)
{
	// return nullptr;
}

const int &Bank::getLiquidity() const
{
	return this->_liquidity;
}

// const int &Bank::getClientAccounts()
// {
// 	// TODO: вставьте здесь оператор return
// }

void Bank::addAccount(const int id, int value)
{
	if (this->_clientAccounts.find(Bank::Account(id)) == this->_clientAccounts.end())
	{
		int tok = value / 100 * 5;
		value -= tok;
		Bank::Funds * val = new Funds(value);
		if (!val)
			throw std::length_error("Erro Mallocc");
		this->_clientAccounts[Bank::Account(id)] = val;
		this->_liquidity += tok;
	}else
	{
		throw std::length_error("Tenc id arden ka");
	}
}

void Bank::addMoney(const int id, int count)
{
	if (this->_clientAccounts.find(Bank::Account(id)) != this->_clientAccounts.end())
	{
		int tok = count / 100 * 5;
		count -= tok;
		Bank::Funds * fn = this->_clientAccounts[Bank::Account(id)];
		fn->setValur(fn->getValue() + count);
		this->_liquidity += tok;
	}else
	{
		throw std::length_error("Tenc id ov akaunt chka");
	}
}

int Bank::getMoney(const int id, int count)
{
}

void Bank::addCredit(const int id, int count)
{
}

void Bank::deleetAccaunt(const int id)
{
}

std::ostream &operator<<(std::ostream &p_os, const Bank &p_bank)
{
	// TODO: вставьте здесь оператор return
}

Bank::Funds::Funds(const int value) : _value(value), _credit(0)
{
}

const int &Bank::Funds::getValue() const
{
	return this->_value;
}

const int &Bank::Funds::getCredit() const
{
	return this->_credit;
}

void Bank::Funds::setValur(const int &value)
{
	this->_value = value;
}

void Bank::Funds::setCredit(const int &credit)
{
	this->_credit = credit;
}
