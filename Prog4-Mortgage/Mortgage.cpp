// implementation file for Mortgage class
#include "Mortgage.h"

bool Mortgage::setAmount(double amount)
{
	bool flag = false;
	if (amount > 0)
	{
		loanAmount = amount;
		flag = true;
	}
	return flag;
}

bool Mortgage::setRate(double iRate)
{
	bool flag = false;
	if (iRate > 0.0 && iRate <= 50)
	{
		interestRate = iRate;
		flag = true;
	}
	return flag;
}

bool Mortgage::getTerms(int t)
{
	if (t > 0 && t <= 40)
	{
		terms = t;

	}
}