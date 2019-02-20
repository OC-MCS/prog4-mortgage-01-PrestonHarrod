#include <iostream>
#include "Mortgage.h"
using namespace std;

void getData(Mortgage &);
void displayData(const Mortgage);
int main()
{
	Mortgage userData;

	getData(userData);
	userData.getTotal();
	displayData(userData);
}

void getData(Mortgage &userData)
{
	int terms = 0;
	double iRate = 0.0;
	double amount = 0.0;

	cout << "Please enter your loan amount: " << endl;
	cin >> amount;

	while (userData.setAmount(amount) == false)
	{
		cout << "Please enter your loan amount: ";
		cin >> iRate;
	}

	cout << "Please enter annual interest rate: " << endl;
	cin >> iRate;
	while (userData.setRate(iRate) == false)
	{
		cout << "Please enter annual interest rate: ";
		cin >> iRate;
	}

	cout << "Please enter the amount of terms in years: " << endl;
	cin >> terms;
	while (userData.setTerms(terms) == false)
	{
		cout << "Please enter the number of terms in years: ";
		cin >> terms;
	}

}

void displayData(const Mortgage userData)
{
	cout << "Loan amount = $" << userData.getAmount() << endl;
	cout << "Yearly interest Rate = " << userData.getRate() << "%" << endl;
	cout << "Loan Term = " << userData.getTerms() << " Years" << endl;

	cout << "Your total is: $" << userData.getmonthlyPayment() << endl;

}