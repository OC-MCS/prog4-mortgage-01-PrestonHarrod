#pragma once
// header file for Mortgage class
class Mortgage {
	private: 
		double loanAmount;
		double monthlyPayment;
		double interestRate;
		int terms;

	public:
		Mortgage(): (double loadAmount(0.0), double monthlyPayment(0.0), double interestRate(0.0), int terms(0.0));

		bool setAmount(double);
		bool setRate(double);
		bool getTerms(int);
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
}
#endif
