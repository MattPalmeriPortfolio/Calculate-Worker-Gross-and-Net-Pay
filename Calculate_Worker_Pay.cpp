#include <iostream>
using namespace std; 

	//this program determines a worker's gross and net pay as well as the amount per deduction from gross pay, based on a user's input of hours worked and # of dependents
	//declare constants

int main(){
	
	const double SOCIAL_TAX = 0.06, FEDERAL_TAX = 0.14, STATE_TAX = 0.05, OVERTIME_RATE = 1.5, HOURLY_PAY = 16.78;
	const int UNION_DUES = 10, DEP_THRESHOLD = 3, THRESHOLD_COST = 35;

	//initialize variables
	int hours, dependents;
	double grossPay, netPay;

	//magic formula
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	//greet user and prompt input
	cout << "Welcome valued employee! This program will determine your pay for the week.\n"
		<< "Please enter your hours worked this week.\n";
	cin >> hours;
	cout << "Please enter the number of dependents you take care of.\n";
	cin >> dependents;

	//calculate gross pay
	if (hours > 40)
		grossPay = ((40 * HOURLY_PAY) + ((hours - 40) * HOURLY_PAY * OVERTIME_RATE));
	else (grossPay = hours * HOURLY_PAY);
	netPay = grossPay;

	//calculate net pay through deductions, outputting each along the way
	cout << "Your gross pay is $" << grossPay << endl;
	cout << "Your social security taxes amount to $" << (grossPay * SOCIAL_TAX) << endl;
	netPay -= grossPay * SOCIAL_TAX;
	cout << "Your federal income taxes amount to $" << (grossPay * FEDERAL_TAX) << endl;
	netPay -= grossPay * FEDERAL_TAX;
	cout << "Your state income taxes amount to $" << (grossPay * STATE_TAX) << endl;
	netPay -= grossPay * STATE_TAX;
	cout << "Your union dues amount to $" << UNION_DUES << endl;
	netPay -= UNION_DUES;

	if (dependents >= DEP_THRESHOLD)
	{
		cout << "Your extra dependents insurance cost amounts to $" << THRESHOLD_COST << endl;
		netPay -= THRESHOLD_COST;
	}

	//output final net pay and end program
	cout << "Your total net pay amounts to $" << netPay << endl << "Thank you for using our program!\n";
	return 0;
}

