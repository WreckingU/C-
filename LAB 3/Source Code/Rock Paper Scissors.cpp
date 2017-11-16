/*
Name: Kylan Coffey
Class: CSCI 1411-00X
Description: Rock Paper Scissors Game
Lab Partner: Ruslan
Status: successfully compiled and run on csegrid 
*/

#include <iostream>
#include <cmath>
#include <time.h>
#include <cstdlib>
using namespace std;

int main()
{
    // set the char variable for the y/n while loop.
    char ch;
	// set string variable for Player1 name and Player 2 name
    string player1Name;
    string player2Name;
	
    cout << "Enter Player1's name" << endl;
    cin >> player1Name;
    cout << "Enter Player2's name" << endl;
    cin >> player2Name;
	
    //loop
    do{
	int player1;
	int player2;
    cout << "-- Rock, Paper, Scissors! --" << endl;
    // Ask the player1 to choose Rock, Paper, Scissors
    cout << player1Name << " Press 1 for Rock, 2 for Paper, 3 for Scissors:" << endl;
    cin >> player1;
	
    // Ask the player2 to choose Rock, Paper, Scissors
    cout << player2Name << " Press 1 for Rock, 2 for Paper, 3 for Scissors:" << endl;
    cin >> player2;
	
    // starts possible outcome sequence
    if(player1 == 1 && player2 == 1)
	{
         cout << "Rock meets Rock its a tie!" << endl;
    } 
    else if(player1 == 1 && player2 == 2)
	{
         cout << "Rock is covered by Paper " << player2Name << " wins!." << endl;
    } 
    else if(player1 == 1 && player2 == 3)
	{
         cout << "Rock crushes Scissors " << player1Name << " wins!" << endl;
    }	 
    else if(player1 == 2 && player2 == 1)
	{
         cout << "Paper covers Rock " << player1Name << " wins!" << endl;
    } 
    else if(player1 == 2 && player2 == 2)
	{
         cout << "Paper meets Paper its a tie!" << endl;
    }	 
    else if(player1 == 2 && player2 == 3)
	{
         cout << "Paper is cut by Scissors " << player2Name << " wins!" << endl;
    }	 
    else if(player1 == 3 && player2 == 1)
	{
         cout << "Scissors are crushed by Rock " << player2Name << " wins!" << endl;
    }	 
    else if(player1 == 3 && player2 == 2)
	{
         cout << "Scissors cuts Paper " << player1Name << " wins!" << endl;
    }	 
    else if(player1 == 3 && player2 == 3)
	{
         cout << "Scissors meet Scissors its a tie!" << endl;
    }	 
    else
	{
         cout << "You didn't select 1, 2, or 3" << endl;
    }	 
         cout << "Would you like to play again? Y/N" << endl;
         cin >> ch;
    }	 while(ch == 'Y' || ch == 'y');
    return 0;
}