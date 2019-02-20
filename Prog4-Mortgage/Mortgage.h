#pragma once
#ifndef MORTGAGE_PAYMENT_H
#define MORTGAGE_PAYMENT_H
// header file for Mortgage class
class Mortgage {
	private: 
		double loanAmount; // Hold loan amount
		double monthlyPayment; // Hold total amount of money owed
		double interestRate; // Hold interest rate
		int terms; // Hold number of terms

	public:
		Mortgage() : loanAmount(0.0), monthlyPayment(0.0), interestRate(0.0), terms(0)
		{ }

		bool setAmount(float);
		bool setRate(float);
		bool setTerms(float);
		void getTotal();

		double getAmount() const
		{
			return loanAmount;
		}

		double getRate() const
		{
			return interestRate;
		}

		int getTerms() const
		{
			return terms;
		}

		double getmonthlyPayment() const
		{
			return monthlyPayment;
		}
};
#endif
