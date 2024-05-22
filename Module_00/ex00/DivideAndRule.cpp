#include "DivideAndRule.hpp"

const int Bank::Account::getValue()
{
	return 0;
}

const int Bank::Account::getId()
{
	return 0;
}

const int Bank::Account::getCredit()
{
	return 0;
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
	// TODO: вставьте здесь оператор return
}

const int &Bank::getClientAccounts()
{
	// TODO: вставьте здесь оператор return
}

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
