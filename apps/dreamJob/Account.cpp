
#include "Account.hpp"
#include <chrono>
#include <ctime>
#include <iomanip>
#include <chrono>
#include <ctime>
#include <iostream>
#include <sstream>

static void	_displayTimestamp( void )
{
    auto currentTime = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    std::tm timeInfo;
    localtime_r(&currentTime, &timeInfo); 
	std::ostringstream timestampStream;
    timestampStream << "["
                    << std::setw(4) << std::setfill('0') << timeInfo.tm_year + 1900
                    << std::setw(2) << std::setfill('0') << timeInfo.tm_mon + 1
                    << std::setw(2) << std::setfill('0') << timeInfo.tm_mday
                    << "_"
                    << std::setw(2) << std::setfill('0') << timeInfo.tm_hour
                    << std::setw(2) << std::setfill('0') << timeInfo.tm_min
                    << std::setw(2) << std::setfill('0') << timeInfo.tm_sec
                    << "] ";
}

static int getNbAccounts()
{
		return _NbAccounts;
}

static int	getTotalAmount( void )
{
	return _totalAmount;
}

static int	getNbDeposits( void )
{
	return _NbDeposits;
}
static int	getNbWithdrawals( void )
{
	return _Nbwitdrawals;
}
void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	int nbAccounts = getNbAccounts();
	int total = getTotalAmount();
	int withdrawals = getNbWithdrawals;
	int Deposits = getNbDeposits;
}
	
void	makeDeposit( int deposit )
{
	_amount += deposit;
	_nbDeposits += 1;

}

bool	makeWithdrawal( int withdrawal )
{

	if (checkAmount() >= withdrawal)
		return true;
	else
		return false;

}

int		Account::checkAmount() const
{
	return _amount;
}
// void	displayStatus( void ) const;

Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
}


Account::~Account( void )
{
}