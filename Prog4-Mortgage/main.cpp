#include <iostream>
#include "Mortgage.h"
#include <string>
using namespace std;

void getData(Mortgage &);
void displayData(const Mortgage);
bool parseInt(string sval, float& val);
int main()
{
	Mortgage userData; // Class to hold user data

	getData(userData);
	userData.getTotal();
	displayData(userData);
}
/*********************
getData
Asks user for terms, interest Rate and loan amount
and stores it in the class

Params: userData class
Returns: None
**********************/
void getData(Mortgage &userData)
{
	string input;
	float terms = 0.0; // Hold entered terms
	float iRate = 0.0; // Hold interest rate
	float amount = 0.0; // Hold loan amount entered

	cout << "Please enter your loan amount: " << endl;
	getline(cin, input);
     
	if (!parseInt(input, amount)) 
	{ 
		cout << "Please enter a number and not a string " << endl;
	}

	while (userData.setAmount(amount) == false)
	{
		cout << "Please enter your loan amount: ";
		cin >> iRate;
	}


	cout << "Please enter annual interest rate: " << endl;
	cin >> input;

	iRate = stod(input);
	if (!parseInt(input, iRate))
	{
		cout << "Please enter a number and not a string " << endl;
	}

	while (userData.setRate(iRate) == false)
	{
		cout << "Please enter annual interest rate: ";
		cin >> iRate;
	}

	cout << "Please enter the amount of terms in years: " << endl;
	cin >> input;

	terms = stod(input);
	if (!parseInt(input, terms))
	{
		cout << "Please enter a number and not a string " << endl;
	}

	while (userData.setTerms(terms) == false)
	{
		cout << "Please enter the number of terms in years: ";
		cin >> terms;
	}

}
/**************************
displayData

Displays the data entered and total amount owed

Params: userData class
Returns: None
**************************/
void displayData(const Mortgage userData)
{
	cout << "Loan amount = $" << userData.getAmount() << endl;
	cout << "Yearly interest Rate = " << userData.getRate() << "%" << endl;
	cout << "Loan Term = " << userData.getTerms() << " Years" << endl;

	cout << "Your total is: $" << userData.getmonthlyPayment() << endl;

}
/******************
parseInt

Handles exception if string is entered instead of an float

Params: string, float
Returns: bool
*******************/
bool parseInt(string sval, float& val)
{
	float num = 0.0;
	bool success = true;
	try
	{
		num = stof(sval);   // or use stof for string-to-float
		val = num;
	}
	catch (const std::exception&)
	{
		success = false;
	}
	return success;
}