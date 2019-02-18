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
	bool flag = false;
	if (t > 0 && t <= 40)
	{
		terms = t;
		flag = true;
	}
	return flag;
}

void Mortgage::getTotal()
{
	int theTerms = (getTerms() / 12);
	double iRate = ((getRate() / 100) / 12);

	monthlyPayment = getAmount() * (pow(iRate + 1, theTerms) *
					iRate / (pow(iRate + 1, theTerms) - 1)

}