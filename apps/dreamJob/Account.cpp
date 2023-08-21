
#include "Account.hpp"
#include <chrono>
#include <ctime>
#include <iomanip>
#include <chrono>
#include <ctime>
#include <iostream>
#include <sstream>

void	Account::_displayTimestamp( void )
{
    auto currentTime = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    std::tm timeInfo;
    localtime_r(&currentTime, &timeInfo); 
    std::cout << "["
                    << std::setw(4) << std::setfill('0') << timeInfo.tm_year + 1900
                    << std::setw(2) << std::setfill('0') << timeInfo.tm_mon + 1
                    << std::setw(2) << std::setfill('0') << timeInfo.tm_mday
                    << "_"
                    << std::setw(2) << std::setfill('0') << timeInfo.tm_hour
                    << std::setw(2) << std::setfill('0') << timeInfo.tm_min
                    << std::setw(2) << std::setfill('0') << timeInfo.tm_sec
                    << "] ";
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	//more information printed

}

int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return _totalAmount;
}

int Account::getNbDeposits( void )
{
	/*
		return this->total amount, for non-static member arguement void, super magic this. 
		static int	getTotalAmount( void );
		(pointer to the class)?????? WHAT AM I EVEN DOING HERE?
	*/
	return 	_totalNbWithdrawals;
}

int	Account::getNbWithdrawals( void )
{
	return 	_totalNbDeposits;
}


void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts <<';';
	std::cout << "total:" << _totalAmount <<';';
	std::cout << "deposits:" << _totalNbDeposits <<';';
	std::cout << "withdrawals:" << _totalNbWithdrawals <<';' << std::endl;
}
	
void	Account::makeDeposit( int deposit )
{
	_amount += deposit;
	_nbDeposits += 1;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (checkAmount() >= withdrawal)
	{
		_amount -= withdrawal;
		_nbWithdrawals += 1;
		_totalNbWithdrawals += 1;
		return true;
	}
	else
	{
		_displayTimestamp();
		std::cout << std::setw(2) << std::setfill('0') << " " << _accountIndex << _amount << "withdrawal:refused";
		return false;
	}
}

int		Account::checkAmount() const
{
	return _amount;
}


Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
	_accountIndex = Account::getNbAccounts();
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}


Account::~Account( void )
{
}