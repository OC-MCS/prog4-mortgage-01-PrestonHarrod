#include <iostream>
#include <string>
#include "Mortgage.h"
using namespace std;
// main goes here. Code that *uses* the Mortgage class
// goes in this file

void getData(Mortgage &);
void displayData(const Mortgage)
int main()
{
	Mortgage userData;

	getData(userData);
}

void getData(Mortgage userData)
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
	while (userData.setTerm(terms) == false)
	{
		cout << "Please enter the number of terms in years: ";
		cin >> terms;
	}

}

void displayData

