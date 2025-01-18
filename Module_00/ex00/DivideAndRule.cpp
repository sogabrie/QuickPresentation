#include "DivideAndRule.hpp"

// throw std::runtime_error(std::string());

Bank::Account::Account(int id)
{
}

Bank::Account::~Account()
{
}

bool Bank::Account::operator==(const int id)
{
    return false;
}

bool Bank::Account::operator==(const int id) const
{
    return false;
}

bool Bank::Account::operator==(const Account &other)
{
    return false;
}

const int &Bank::Account::getId() const
{
    // TODO: вставьте здесь оператор return
}

Bank::Cash::Cash()
{
}

Bank::Cash::Cash(const int value)
{
}

Bank::Cash::~Cash()
{
}

const int &Bank::Cash::getValue() const
{
    // TODO: вставьте здесь оператор return
}

const int &Bank::Cash::getCredit() const
{
    // TODO: вставьте здесь оператор return
}

void Bank::Cash::editValur(const int &value)
{
}

void Bank::Cash::editCredit(const int &credit)
{
}

Bank::Bank(const int &liquidity)
{
}

Bank::~Bank()
{
}

Bank::Account &const Bank::operator[](int id) const
{

}

Bank::Account &Bank::operator[](int id)
{

}

const int &Bank::getLiquidity() const
{
    // TODO: вставьте здесь оператор return
}

void Bank::addAccount(const int id, int cash)
{
}

void Bank::addMoneyClient(const int id, int cash)
{
}

void Bank::getMoneyClient(const int id, int cash)
{
}

void Bank::deleetAccaunt(const int id)
{
}

void Bank::addCredit(const int id, int cash)
{
}

std::string Bank::getInfoClient(const int id)
{
    return std::string();
}

std::string Bank::getInfoAllcli()
{
    return std::string();
}

void Bank::addMoney(const int id, int chsh)
{
}

void Bank::getMoney(const int id, int cash)
{
}
