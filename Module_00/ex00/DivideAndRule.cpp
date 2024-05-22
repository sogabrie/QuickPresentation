#include "DivideAndRule.hpp"

Bank::Account::Account(const int id) : _id(id) {}

Bank::Account::Account(const Account & other) 
{}

Bank::Account &Bank::Account::operator=(const Account &other)
{
	// TODO: вставьте здесь оператор return
}

bool Bank::Account::operator==(const Bank::Account &other)
{
	return false;
}

const int &Bank::Account::getId() const
{
	// TODO: вставьте здесь оператор return
}

Bank &Bank::operator=(const Bank &other)
{
	// TODO: вставьте здесь оператор return
}

Bank::Bank(const Bank &other)
{
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

Bank::Funds::Funds(const int value)
{
}

const int &Bank::Funds::getValue() const
{
	// TODO: вставьте здесь оператор return
}

const int &Bank::Funds::getCredit() const
{
	// TODO: вставьте здесь оператор return
}

void Bank::Funds::setValur(const int &value)
{
}

void Bank::Funds::setCredit(const int &credit)
{
}
