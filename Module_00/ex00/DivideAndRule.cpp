#include "DivideAndRule.hpp"

// throw std::runtime_error(std::string());

int Bank::_global_id = 0;

Bank::Account::Account()
{
}

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

bool Bank::Account::operator<(const int id)
{
    return this->_id < id;;
}

bool Bank::Account::operator<(const int id) const
{
    return this->_id < id;
}

bool Bank::Account::operator<(const Account &other) const
{
    return this->_id < other._id;
}

// bool Bank::Account::operator<(const Account other)
// {
//     return this->_id < other._id;
// }

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

// const Bank::Account &const Bank::operator[](int id) const
// {
//     std::stringstream ss;
//     ss << "Account /'" << id << "/' was not founded";
//     std::string errmsg = ss.str();
//     std::map<Bank::Account, Bank::Cash>::const_iterator it = this->_clientAccounts.find(id);
//     if ( it == this->_clientAccounts.end())
//     {
//         throw std::out_of_range(errmsg);
//     }
//     return it->first;
// }

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

void Bank::addAccount(int cash)
{
    int id = this->_global_id++;
    if (this->_clientAccounts.find(id) != this->_clientAccounts.end())
    {
        throw std::out_of_range("Error ADD account");
    }
    if (cash > 0)
    {
        this->_liquidity += cash / 100 * 5;
        cash = cash - (cash / 100 * 5);
    }
    this->_clientAccounts[id] = Bank::Cash(cash);
}

void Bank::editMoneyClient(const int id, int cash)
{
    std::stringstream ss;
    ss << "Account /'" << id << "/' was not founded";
    std::string errmsg = ss.str();
    if (this->_clientAccounts.find(id) == this->_clientAccounts.end())
    {
        throw std::out_of_range("errmsg");
    }
    if (cash > 0)
    {
        this->_liquidity += cash / 100 * 5;
        cash = cash - (cash / 100 * 5);
    }
    this->_clientAccounts[id].editValur(cash);
}

void Bank::deleetAccaunt(const int id)
{
    std::stringstream ss;
    ss << "Account /'" << id << "/' was not founded";
    std::string errmsg = ss.str();
    if (this->_clientAccounts.find(id) == this->_clientAccounts.end())
    {
        throw std::out_of_range(errmsg);
    }
    if (this->_clientAccounts[id].getCredit() > 0)
    {
        throw std::out_of_range("Accaoun have credit");
    }
    this->_clientAccounts.erase(id);
}

void Bank::addCredit(const int id, int cash)
{
    std::stringstream ss;
    ss << "Account /'" << id << "/' was not founded";
    std::string errmsg = ss.str();
    if (this->_clientAccounts.find(id) == this->_clientAccounts.end())
    {
        throw std::out_of_range(errmsg);
    }
    if (cash > this->_liquidity)
    {
        throw std::out_of_range("No Cash");
    }
    this->_liquidity -= cash;
    this->_clientAccounts[id].editValur(cash);
    this->_clientAccounts[id].editCredit(cash + (cash / 100 * 5));
}

void Bank::repaymentCredit(const int id, int cash)
{
    std::stringstream ss;
    ss << "Account /'" << id << "/' was not founded";
    std::string errmsg = ss.str();
    if (this->_clientAccounts.find(id) == this->_clientAccounts.end())
    {
        throw std::out_of_range(errmsg);
    }
    if (cash > this->_clientAccounts[id].getValue())
    {
        throw std::out_of_range("No Cash");
    }
    if (cash > this->_clientAccounts[id].getCredit())
    {
        throw std::out_of_range("More Cash");
    }
    this->_liquidity += cash;
    this->_clientAccounts[id].editValur(-cash);
    this->_clientAccounts[id].editCredit(-cash);
}

std::string Bank::getInfoClient(const int id)
{
    std::stringstream ss;
    ss << "Account \'" << id << "\' was not founded";
    std::string errmsg = ss.str();
    if (this->_clientAccounts.find(id) == this->_clientAccounts.end())
    {
        throw std::out_of_range(errmsg);
    }
    std::stringstream aa;
    aa << "Account" << "[" << id << "] - [" << this->_clientAccounts[id].getValue() << "]" << " credit [" << \
        this->_clientAccounts[id].getCredit() << "]";
    return std::string(aa.str());
}

std::string Bank::getInfoAllcli()
{
    std::stringstream ss;
    ss << "Bank informations " << std::endl;
    ss << "Liquidity : " << this->_liquidity << std::endl;
    for(std::map<Bank::Account, Bank::Cash>::iterator it = this->_clientAccounts.begin();
            it != this->_clientAccounts.end(); ++it)
    {
        ss << this->getInfoClient(it->first.getId()) << std::endl;
    }
    return std::string(ss.str());
}
