/* 
Name: Kylan Coffey
Class: CSCI 1411-00X
Description: String to CString Lab10
Lab Partner: Russlin
Status: Successfully compiled and run on Visual Studio

//NOTE: system("pause") only works for Windows OS please comment "system("pause");" when using Linux

*/

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

//functions.h
/*
Pseudo-code:
Make a function that will take in a string and convert it into a char then reverse the character in opposite order.
*/
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
char *backwardCString(char *cstring, int size);
string backwardString(string stringObject);
#endif

//functions.cpp
/*
Pseudo-code:
Write specific instructions on how to convert the string into a char and then use those chars to order them in reverse.
*/
char* backwardCString(char *cstring, int size)
{
	char* backCString = new char[size];
	backCString[size - 1] = '\n';

	for (int i = 0; i < size; i++)
	{
		backCString[size - 2 - i] = cstring[i];
	}
	return backCString;
}

string backwardString(string stringObject)
{
	string backString = stringObject;
	for (int i = 0; i < stringObject.size(); i++)
		backString[stringObject.size() - 1 - i] = stringObject[i];
	return backString;
}

//CoffeyKylanLab10.cpp
/*
Pseudo-code:
Ask the user for input which input is a string then make a point to a char. Take the sting input and cast the string into a char. Call the function to reverse in reverse order. Then print out the results.
*/
int main()
{
	string input;
	char * cstring;
	cout << "Enter a word that is 100 characters or less." << endl;
	cout << "Input: ";
	cin >> input;

	string str = input;
	char inCstring[101];

	strcpy_s(inCstring, str.c_str());

	cout << "Original Word: " << str << endl;

	string mystring = input, reverseString;
	reverseString = backwardString(mystring);
	cout << "Word Reversed: " <<reverseString << endl;
	cout << "Made by Kylan Coffey" << endl;

	//NOTE: system("pause") only works for Windows OS please comment "system("pause");" when using Linux
	system("pause");
	return 0;
}