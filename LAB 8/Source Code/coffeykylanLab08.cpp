/*
Name: Kylan Coffey
Class: CSCI 1411-00X
Description: Lab08 Part 3
Lab Partner: Russlin
Status: successfully compiled and run on csegrid/*
//Function Prototypes
//Function Implementations
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

#pragma once
#ifndef MOVIE_H
#define MOVIE_H
#include <string>
using namespace std;
struct Movie
{
	string title;
	string RYear;
	int RTime;
	int Rating;
};
#endif //MOVIE_H

#pragma once
#ifndef MOVIEFUNCTIONS_H
#define MOVIEFUNCTIONS_H
Movie newMovie(istream &in);
bool addMovie(Movie MovieToAdd, Movie  movieArray[], int &currentSize, const int MAXSIZE);
void listMovies(ostream &out, Movie  movieArray[], int &currentSize);
void searchMovieTitle(string title, Movie movieArray[], int currentSize);
void sortMovieTitle(Movie movieArray[], int currentSize);
void swap(int&a, int &b);
void swap(string &a, string &b);
#endif

Movie newMovie(istream &in)
{
	Movie movie1;
	cout << "Title: ";
	in.ignore();
	getline(in, movie1.title);
	cout << "\nRelease Year: ";
	getline(in, movie1.RYear);
	cout << "\nRun Time: ";
	in >> movie1.RTime;
	cout << "\nRating: ";
	in >> movie1.Rating;
	cout << endl;
	return movie1;
}

bool addMovie(Movie movieToAdd, Movie movieArray[], int &currentSize, const int MAXSIZE)
{
	currentSize++;
	if (currentSize < MAXSIZE)
	{
		movieArray[currentSize - 1] = movieToAdd;
		return true; //successful add
	}
	else
		return false;
}

void listMovies(ostream &out, Movie movieArray[], int &currentSize)
{
	for (int i = 0; i < currentSize; i++)
	{
		out << "Movie " << i + 1 << endl;
		out << movieArray[i].title << endl;
		out << movieArray[i].RYear << endl;
		out << movieArray[i].RTime << endl;
		out << movieArray[i].Rating << endl << endl;
	}
}

void searchMovieTitle(string title, Movie movieArray[], int currentSize)
{
	bool found = false;
	for (int i = 0; i < currentSize; i++)
	{
		if (movieArray[i].title == title)
		{
			found = true;
			cout << "Movie at position " << i << endl;
			cout << movieArray[i].title << endl;
			cout << movieArray[i].RYear << endl;
			cout << movieArray[i].RTime << endl;
			cout << movieArray[i].Rating << endl << endl;
		}//if
	}//for
	if (!found)
		cout << "Record not found\n";
}

void sortMovieTitle(Movie movieArray[], int currentSize)
{
	//bubble sort 
	int maxElement;
	int index;

	for (maxElement = currentSize - 1; maxElement > 0; maxElement--)
	{
		for (index = 0; index < maxElement; index++)
		{
			if (movieArray[index].title > movieArray[index + 1].title)
			{
				//swap the entire record (Title, RYear, Run Time and Rating)
				swap(movieArray[index].title, movieArray[index + 1].title);
				swap(movieArray[index].RYear, movieArray[index + 1].RYear);
				swap(movieArray[index].RTime, movieArray[index + 1].RTime);
				swap(movieArray[index].Rating, movieArray[index + 1].Rating);

			}//if
		}//for
	}//for
}//swap

void swap(int&a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void swap(string &a, string &b)
{
	string temp = a;
	a = b;
	b = temp;
}

int main()
{
	const int MAXSIZE = 100;
	int currentSize = 0;
	Movie movie1;
	Movie movieArray[MAXSIZE];
	int menu;
	string title;
	bool done = false;
	while (!done)
	{
		cout << "1. Add Movies\n";
		cout << "2. List Movies\n";
		cout << "3. Search Movies by Title\n";
		cout << "4. Sort Movies by Title\n";
		cout << "5. exit\n";
		cin >> menu;
		switch (menu)
		{
		case 1: movie1 = newMovie(cin);
			addMovie(movie1, movieArray, currentSize, MAXSIZE);
			break;
		case 2: listMovies(cout, movieArray, currentSize);
			break;
		case 3: cout << "What make do you want to search for? ";
			cin >> title;
			searchMovieTitle(title, movieArray, currentSize);
			break;
		case 4:
			sortMovieTitle(movieArray, currentSize);
			break;
		case 5: exit(0);
			break;
		default: cout << "Number between 1 and 5\n";
		}//switch
	}//while
}//main