#include "DivideAndRule.hpp"

Bank::Account::Account(const int id, const int value) : _id(id), _value(value), _credit(0)
{
}

const int & Bank::Account::getValue()
{
	return this->_id;
}

const int & Bank::Account::getId()
{
	return this->_value;
}

const int & Bank::Account::getCredit()
{
	return this->_credit;
}

Bank::Bank()
{
}

Bank::~Bank()
{
}

int &Bank::operator[](int id)
{
	// TODO: вставьте здесь оператор return
}

const int &Bank::getLiquidity()
{
	return this->_liquidity;
}

// const int &Bank::getClientAccounts()
// {
// 	// TODO: вставьте здесь оператор return
// }

void Bank::addAccaunt(const int id, int value)
{
}

void Bank::addMoney(const int id)
{
}

void Bank::getMoney(const int id, const int count)
{
}

void Bank::addCredit(const int id, const int count)
{
}

void Bank::deleetAccaunt(const int id)
{
}

std::ostream &operator<<(std::ostream &p_os, const Bank &p_bank)
{
	// TODO: вставьте здесь оператор return
}
