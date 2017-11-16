#include<iostream>
#include<string>
using namespace std;


int main()
{
	//Ask First and Last Name
	string firstName, lastName;

	//Hours and time worked
	int hoursLastWeek = 0;
	double hoursThisWeek = 0;
	double timeHalf = 1.5;
	double payRate = 0;
	double timeHalfHoursLastWeek = 0;
	double timeHalfHoursThisWeek = 0;
	double payTimeHalfHoursLastWeek = 0;
	double payTimeHalfHoursThisWeek = 0;

	//Fees
	double socialSecurityTax = 0.06;
	double federalIncomeTax = 0.14;
	double stateIncomeTax = 0.05;
	double unionDues = 10;
	double socialSecurityTaxOutput = 0;
	double federalIncomeTaxOutput = 0;
	double stateIncomeTaxOutput = 0;
	double unionDuesOutput = 0;

	cout << "What is your First Name?" << endl;
	cin >> firstName;
	cout << " " << endl;
	cout << "What is your Last Name?" << endl;
	cin >> lastName;
	cout << " " << endl;
	cout << "How much do you get payed per hour?" << endl;
	cin >> payRate;
	cout << " " << endl;
	cout << "How many hours did you work LAST week?" << endl;
	cin >> hoursLastWeek;
	cout << " " << endl;
	cout << "How many hours did you work THIS week?" << endl;
	cin >> hoursThisWeek;
	cout << " " << endl;

	if (hoursThisWeek > 40)
	{
		timeHalfHoursThisWeek = hoursThisWeek - 40;
		payTimeHalfHoursThisWeek = timeHalfHoursThisWeek * 1.5;
		cout << "You earned time and a half pay for working over 40 hours." << endl;
		cout << " " << endl;
		//Calculate Gross Pay
		double grossPay = (hoursLastWeek * hoursThisWeek) + payTimeHalfHoursLastWeek + payTimeHalfHoursThisWeek;
		cout << "Your Gross Pay this week is: $" << grossPay << " (Before Fees)" << endl;
		double socialSecurityTaxOutput = grossPay * socialSecurityTax;
		double federalIncomeTaxOutput = grossPay * federalIncomeTax;
		double stateIncomeTaxOutput = grossPay * stateIncomeTax;

		//Percent of pay output
		int  socialSecurityPercent = grossPay / socialSecurityTax;
		int federalIncomePercent = grossPay / federalIncomeTax;
		int stateIncomePercent = grossPay / stateIncomeTax;
		int unionFeePercent = grossPay / unionDues;

		cout << " " << endl;
		cout << "Fees Breakdown:" << endl;
		cout << "Social Seecurity Tax: $" << socialSecurityTaxOutput << " (6%)" << endl;
		cout << "Federal Income Tax: $" << federalIncomeTaxOutput << " (14%)" << endl;
		cout << "State Income Tax: $" << stateIncomeTaxOutput << " (5%)" << endl;
		cout << "Union Fee $" << unionDues << " (" << unionFeePercent << "%)" << endl;
		cout << " " << endl;

		double fees = (socialSecurityTaxOutput + federalIncomeTaxOutput + stateIncomeTaxOutput + unionDues);
		double netPay = grossPay - fees;

		cout << "Your Net Pay is $" << netPay << " (Including Fees)" << endl;
		cout << " " << endl;
	}
	else if (hoursLastWeek > 40)
	{
		timeHalfHoursThisWeek = hoursThisWeek - 40;
		payTimeHalfHoursThisWeek = timeHalfHoursThisWeek * 1.5;
		cout << "You earned time and a half pay for working over 40 hours." << endl;
		cout << " " << endl;
		//Calculate Gross Pay
		double grossPay = (hoursLastWeek * hoursThisWeek) + payTimeHalfHoursLastWeek + payTimeHalfHoursThisWeek;
		cout << "Your Gross Pay this week is: $" << grossPay << " (Before Fees)" << endl;
		double socialSecurityTaxOutput = grossPay * socialSecurityTax;
		double federalIncomeTaxOutput = grossPay * federalIncomeTax;
		double stateIncomeTaxOutput = grossPay * stateIncomeTax;

		//Percent of pay output
		int  socialSecurityPercent = grossPay / socialSecurityTax;
		int federalIncomePercent = grossPay / federalIncomeTax;
		int stateIncomePercent = grossPay / stateIncomeTax;
		int unionFeePercent = grossPay / unionDues;

		cout << " " << endl;
		cout << "Fees Breakdown:" << endl;
		cout << "Social Seecurity Tax: $" << socialSecurityTaxOutput << " (6%)" << endl;
		cout << "Federal Income Tax: $" << federalIncomeTaxOutput << " (14%)" << endl;
		cout << "State Income Tax: $" << stateIncomeTaxOutput << " (5%)" << endl;
		cout << "Union Fee $" << unionDues << " (" << unionFeePercent << "%)" << endl;
		cout << " " << endl;

		double fees = (socialSecurityTaxOutput + federalIncomeTaxOutput + stateIncomeTaxOutput + unionDues);
		double netPay = grossPay - fees;

		cout << "Your Net Pay is $" << netPay << " (Including Fees)" << endl;
		cout << " " << endl;
	}
	else
	{
		cout << "You did not earn time and a half pay." << endl;
		cout << " " << endl;
		//Calculate Gross Pay
		double grossPay = (hoursLastWeek * hoursThisWeek) + payTimeHalfHoursLastWeek + payTimeHalfHoursThisWeek;
		cout << "Your Gross Pay this week is: $" << grossPay << " (Before Fees)" << endl;

		double socialSecurityTaxOutput = grossPay * socialSecurityTax;
		double federalIncomeTaxOutput = grossPay * federalIncomeTax;
		double stateIncomeTaxOutput = grossPay * stateIncomeTax;

		//Percent of pay output
		int  socialSecurityPercent = grossPay / socialSecurityTax;
		int federalIncomePercent = grossPay / federalIncomeTax;
		int stateIncomePercent = grossPay / stateIncomeTax;
		int unionFeePercent = grossPay / unionDues;

		cout << " " << endl;
		cout << "Fees Breakdown:" << endl;
		cout << "Social Seecurity Tax: $" << socialSecurityTaxOutput << " (6%)" << endl;
		cout << "Federal Income Tax: $" << federalIncomeTaxOutput << " (14%)" << endl;
		cout << "State Income Tax: $" << stateIncomeTaxOutput << " (5%)" << endl;
		cout << "Union Fee $" << unionDues << " (" << unionFeePercent << "%)" << endl;
		cout << " " << endl;

		double fees = (socialSecurityTaxOutput + federalIncomeTaxOutput + stateIncomeTaxOutput + unionDues);
		double netPay = grossPay - fees;

		cout << "Your Net Pay is $" << netPay << " (Including Fees)" << endl;
		cout << " " << endl;

	}

}
