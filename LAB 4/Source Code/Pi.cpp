/*
Name: Kylan Coffey
Class: CSCI 1411-00X
Description: Calcualtes PI to the accuracy of 5 decimal places
Lab Partner: Ruslan
Status: successfully compiled and run on csegrid  [if it doesn’t run or meet all of the requirements, list the actual status!
*/

//#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <math.h>


using namespace std;

double pi = 0;
int i = 0;
double n = 0;
double x = 0;

int main()
{

	for (i = 0; i < 1000000000; i++)
	{
		double z = 1.0 / (2 * i + 1.0);

		if ((i % 2) == 1)
		{
			z = z * -1;
		}
		x = (x + z);
	}

	pi = 4 * x;
	cout << pi << endl;
	//system("pause");
	return 0;
}

