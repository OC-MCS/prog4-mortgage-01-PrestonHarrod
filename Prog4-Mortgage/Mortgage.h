#pragma once
#ifndef MORTGAGE_PAYMENT_H
#define MORTGAGE_PAYMENT_H
// header file for Mortgage class
class Mortgage {
	private: 
		double loanAmount;
		double monthlyPayment;
		double interestRate;
		int terms;

	public:
		Mortgage() : loanAmount(0.0), monthlyPayment(0.0), interestRate(0.0), terms(0)
		{ }

		bool setAmount(double);
		bool setRate(double);
		bool setTerms(int);
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
