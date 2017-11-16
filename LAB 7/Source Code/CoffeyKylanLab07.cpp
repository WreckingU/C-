/* 
Name: Kylan Coffey
Class: CSCI 1411-00X
Description: Lab07 Part 4
Lab Partner: Russlin
Status: successfully compiled and run on csegrid/*
//Function Prototypes
//Function Implementations
*/

#include <iostream>
#include <fstream>
#include <string>
//For Visual Studio
//#include "stdafx.h"
using namespace std;

struct Movie
{
	string title;
	string ReleaseYear;
	int RunningTime;
	int Rating;
};

Movie newMovie(istream &in)
{
	Movie movie1;
	cout << "Title:";
	in.ignore();
	getline(in, movie1.title);
	cout << "\nRelease Year:";
	getline(in, movie1.ReleaseYear);
	cout << "\nRunning Time (In Minutes):";
	in >> movie1.RunningTime;
	cout << "\nRating:";
	in >> movie1.Rating;
	// Write to File
	ofstream myfile("AllMovies.txt", std::ofstream::out | std::ofstream::app);
	if (myfile.is_open())
	{
		myfile << "Title:" << movie1.title << endl;
		myfile << "Release Year:" << movie1.ReleaseYear << endl;
		myfile << "Running Time:" << movie1.RunningTime << " Minutes" << endl;
		myfile << "Rating:" << movie1.Rating << "%" <<endl;
		myfile << "" << endl;
		cout << endl;
		myfile.close();
	}
	else cout << "Unable to open file 'AllMovies.txt' ";

	return movie1;
}

bool addMovie(Movie movieToAdd, Movie movieArray[], int &currentSize, const int MAXSIZE)
{

	if (currentSize < MAXSIZE)
	{
		movieArray[currentSize] = movieToAdd;
		currentSize++;
		return true; //successful add
	}
	else
		return false;
}

void listMovies(ostream &out, Movie movieArray[], int &currentSize)
{
	//Read From File
	string line;
	ifstream myfile("AllMovies.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << '\n';
		}
		myfile.close();
	}
}

int main()
{
	const int MAXSIZE = 100;
	int currentSize = 0;
	Movie movie1;
	Movie movieArray[MAXSIZE];
	int menu;
	bool done = false;
	while (!done)
	{
		cout << "1. Add Movies\n";
		cout << "2. List Movies\n";
		cout << "3. Exit\n";
		cin >> menu;
		switch (menu)
		{
		case 1: movie1 = newMovie(cin);
			addMovie(movie1, movieArray, currentSize, MAXSIZE);
			break;
		case 2:
			listMovies(cout, movieArray, currentSize);
			break;
		case 3: exit(0);
			break;
		default: cout << "Number between 1 and 3\n";
		}//switch
	}//while
}//main