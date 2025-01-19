#include "DivideAndRule.hpp"

// throw std::runtime_error(std::string());

Bank::Account::Account(int id) : _id(id)
{
}

Bank::Account::~Account()
{
}

bool Bank::Account::operator==(const int id)
{
    return this->_id == id;
}

bool Bank::Account::operator==(const int id) const
{
    return this->_id == id;
}

bool Bank::Account::operator==(const Account &other)
{
    return this->_id == other._id;
}

const int &Bank::Account::getId() const
{
    return this->_id;
}

Bank::Cash::Cash() : _credit(0),_value(0)
{
}

Bank::Cash::Cash(const int value) : _credit(0), _value(value)
{
}

Bank::Cash::~Cash()
{
}

const int &Bank::Cash::getValue() const
{
    return this->_value;
}

const int &Bank::Cash::getCredit() const
{
    return this->_credit;
}

void Bank::Cash::editValur(const int value)
{
    this->_value += value;
}

void Bank::Cash::editCredit(const int credit)
{
    this->_credit += credit;
}

Bank::Bank(const int liquidity) : _liquidity(liquidity)
{
}

Bank::~Bank()
{
}

const Bank::Account &const Bank::operator[](int id) const
{
    std::stringstream ss;
    ss << "Account /'" << id << "/' was not founded";
    std::string errmsg = ss.str();
    std::map<Bank::Account, Bank::Cash>::const_iterator it = this->_clientAccounts.find(id);
    if ( it == this->_clientAccounts.end())
    {
        throw std::out_of_range(errmsg);
    }
    return it->first;
}

const Bank::Account &Bank::operator[](int id)
{
    std::stringstream ss;
    ss << "Account /'" << id << "/' was not founded";
    std::string errmsg = ss.str();
    std::map<Bank::Account, Bank::Cash>::iterator it = this->_clientAccounts.find(id);
    if ( it == this->_clientAccounts.end())
    {
        throw std::out_of_range(errmsg);
    }
    return it->first;
}

int Bank::getLiquidity() const
{
    return this->_liquidity;
}

void Bank::editLiquidity(int value)
{
    this->_liquidity += value;
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
