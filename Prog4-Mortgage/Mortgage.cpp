// implementation file for Mortgage class
#include "Mortgage.h"
#include <math.h>


bool Mortgage::setAmount(float amount)
{
	bool flag = false;
	if (amount > 0)
	{
		loanAmount = amount;
		flag = true;
	}
	return flag;
}

bool Mortgage::setRate(float iRate)
{
	bool flag = false;
	if (iRate > 0.0 && iRate <= 50)
	{
		interestRate = iRate;
		flag = true;
	}
	return flag;
}

bool Mortgage::setTerms(float t)
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
	int    mTerms = (getTerms() * 12);
	double iRate = (getRate() / 100) / 12;

	monthlyPayment = getAmount() * (pow(iRate + 1, mTerms)) *
		iRate / (pow(iRate + 1, mTerms) - 1);

}