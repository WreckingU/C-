#include <iostream> //needed for cin and cout
#include <string> //needed to use string
using namespace std; //needed for string and cin and cout

int main()
{
	double celsius, fahren;
	int count;
	string firstName, lastName; //use descriptive variable names

	cout << "What is your first name?" << endl;
	cin >> firstName;
	cout << "What is your last name?" << endl;
	cin >> lastName;
	cout << "What is the fahrenheit temperature?\n";
	cin >> fahren;
	celsius = (fahren - 32) * (5.0 / 9.0);
	cout << firstName << " " << lastName <<", the Celsius temperature is " << celsius << endl;
	return 0;
}
