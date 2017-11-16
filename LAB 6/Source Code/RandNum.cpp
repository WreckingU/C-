/* 
Name: Kylan Coffey
Class: CSCI 1411-00X
Description: random numbers
Lab Partner: 
Status: successfully compiled and run on csegrid  [Since this is an outline, it is not expected to compile, but the status should say so!
*/
#include "stdafx.h"
#include <time.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
int total;
int main()
{
	int  numbersToAvg, maxRand, i;

	cout << "How many number do you want to avgerage randomly? " << endl;
	cin >> numbersToAvg;

	cout << "What is the max random number? " << endl;
	cin >> maxRand;

	srand(time(0));

	for (i = 0; i <= numbersToAvg; i++)
	{
		int randVal = rand() % maxRand + 1;
		total = total + randVal;
		cout << "The random int is " << randVal << endl;

	}

	cout << "Your average is: " << total / numbersToAvg << endl;

	return 0;
}