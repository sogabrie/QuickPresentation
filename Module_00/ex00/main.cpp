#include "DivideAndRule.hpp"

int main()
{
	try
	{
		Bank bank(1000);

		std::cout << bank.getInfoAllcli();

		bank.addAccount(200);
		bank.addAccount(300);

		std::cout << bank.getInfoAllcli();

		bank.addCredit(0,100);

		std::cout << bank.getInfoAllcli();

		bank.repaymentCredit(0,50);

		std::cout << bank.getInfoAllcli();

		bank.repaymentCredit(0,55);

		std::cout << bank.getInfoAllcli();

		bank.deleetAccaunt(0);

		std::cout << bank.getInfoAllcli();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	


	// Account accountA = Account();
	// accountA.id = 0;
	// accountA.value = 100;

	// Account accountB = Account();
	// accountB.id = 1;
	// accountB.value = 100;

	// Bank bank = Bank();
	// bank.liquidity = 999;
	// bank.clientAccounts.push_back(&accountA);
	// bank.clientAccounts.push_back(&accountB);

	// bank.liquidity -= 200;
	// accountA.value += 400;

	// std::cout << "Account : " << std::endl;
	// std::cout << accountA << std::endl;
	// std::cout << accountB << std::endl;

	// std::cout << " ----- " << std::endl;

	// std::cout << "Bank : " << std::endl;
	// std::cout << bank << std::endl;

	return (0);
}