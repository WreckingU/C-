/*
Name: Kylan Coffey
Last Date Modified: 9/24/17
Assignment:CSCI 1410 – PA 1 – Encryption (40 points)
Description: Encryption Program
Status: Compiled and ran successfully on csegrid.ucdenver.edu
Met all requirements
*/

//Made in visual studio

//#include "stdafx.h" //uncomment for visual studio
#include <iostream>
#include <string>
using namespace std;

string text;
int s = 4;
int r = 4;

void letterEncrypt()
{
	string str1;
	int i = 0;
	int offset;
	int crypted;

	cout << "Please enter the word you would like to encrypt using word using WORD rotation?\n";
	cin >> str1;
	cout << "What would you like the Key to be?\n";
	cin >> offset;
	while (i<str1.length()) {
		str1[i] = int(str1[i]) + offset;
		i++;
	}

	cout << "Encrypted Cypher: " << str1 << endl;
}

void letterDecrypt()
{
	string str1;
	int i = 0;
	int offset;
	int crypted;

	cout << "Please enter encrypted cypher you would like to decrypt using WORD rotation\n";
	cin >> str1;
	cout << "What Key was used to encrypt this word?\n";
	cin >> offset;
	while (i<str1.length()) {
		str1[i] = int(str1[i]) - offset;
		i++;
	}

	cout << "Decrypted Word: " << str1 << endl;
}

void encrypt(char e[])
{
	for (int i = 0; e[i] != '\0'; ++i) ++e[i];
}

void decrypt(char * ePtr) {
	for (; *ePtr != '\0'; ++ePtr) --(*ePtr);
}

string wordRotationEncryption(string text, int s)
{
	string result = "";
	//traverse text
	for (int i = 0; i<text.length(); i++)
	{
		//apply transformation to each character
		//Encrypt Uppercase letters
		if (isupper(text[i]))
			result += char(int(text[i] + s - 65) % 26 + 65);
		//Encrypt Lowercase letters
		else
			result += char(int(text[i] + s - 97) % 26 + 97);
	}
	//Return the resulting string
	return result;
}

string wordRotationDecryption(string text, int r)
{
	string result = "";
	//traverse text
	for (int i = 0; i<text.length(); i++)
	{
		//apply transformation to each character
		//Encrypt Uppercase letters
		if (isupper(text[i]))
			result += char(int(text[i] + r - 65) % 26 + 65);
		//Encrypt Lowercase letters
		else
			result += char(int(text[i] + r - 97) % 26 + 97);
	}
	//Return the resulting string
	return result;
}

int main()
{
	int choice;

	do
	{
		cout << "Enter 1 to Encrypt a word using Letter rotation.\n"
			<< "Enter 2 to Decrypt a word using Letter rotation.\n"
			<< "Enter 3 to Encrypt a word using Word rotation.\n"
			<< "Enter 4 to Decrypt a word using Word rotation.\n"
			<< "Enter 5 to Exit" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			//code to Encrypt a word using Word rotation
			wordRotationEncryption;
			cout << "Please enter the word you would like to encrypt using word using LETTER rotation" << endl;
			cin >> text;
			cout << "Text :" << text;
			cout << "\nShift:" << s;
			s = s % 26; // s lies between 0-25
			cout << "\nEncrypted Cypher:" << wordRotationEncryption(text, 26 - s) << endl;
			break;

		case 2:
			//code to decrypt a word using Word rotation
			wordRotationDecryption;
			cout << "Please enter encrypted cypher you would like to decrypt using LETTER rotation" << endl;
			cin >> text;
			cout << "Text :" << text;
			cout << "\nShift:" << r;
			r = r % 26; // s lies between 0-25
			cout << "\nDecrypted Word:" << wordRotationEncryption(text, 26 + r) << endl;
			break;

		case 3:
			letterEncrypt();
			break;

		case 4:
			letterDecrypt();
			break;

		case 5:
			cout << "EXIT.\n";
			break;

		default:
			cout << "Not a Valid Choice. \n"
				<< "Choose again.\n";
			break;
		}

	} while (choice != 5);
	return 0;
}