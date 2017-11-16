#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <fstream>
#include <stdio.h>  

using namespace std;
ifstream fileIn;
ofstream fileOut;
int grade = 0;
int difficulty = 0;
int easy_max = 11;
int medium_max = 13;
int medium_min = 2;
int hard_max = 21;
int hard_min = 5;
double number_correct = 0;
double number_wrong = 0;

int addition_easy_high_score = 0;
int addition_medium_high_score = 0;
int addition_hard_high_score = 0;
int subtraction_easy_high_score = 0;
int subtraction_medium_high_score = 0;
int subtraction_hard_high_score = 0;
int multiplication_easy_high_score = 0;
int multiplication_medium_high_score = 0;
int multiplication_hard_high_score = 0;
int division_easy_high_score = 0;
int division_medium_high_score = 0;
int division_hard_high_score = 0;
int exponents_easy_high_score = 0;
int exponents_medium_high_score = 0;
int exponents_hard_high_score = 0;
int savedScoreAE;

void startGame();
void calculate_grade();

void set_difficulty()
{
	cout << "This math game was made by Kyle Coffey." << endl;
	cout << "" << endl;
	cout << "Rules: YOU CAN NOT USE A CALCULATOR!." << endl;
	cout << "" << endl;
	cout << "-------------------------------Select Difficulty--------------------------------" << endl;      //For Easy Press (1),  For Medium Press (2)  For Hard Press (3)"
	cout << " For Easy press (1)" << endl;
	cout << "--------------------------------" << endl;
	cout << " For Medium press (2)" << endl;
	cout << "--------------------------------" << endl;
	cout << " For Hard press (3)" << endl;
	cout << "--------------------------------" << endl;
	cout << "" << endl;
	int answer;
cin >> answer;
cout << "" << endl;
cin.clear();
cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
switch (answer)
{
	case 1:
		difficulty = 0;
		break;

	case 2:
		difficulty = 1;
		break;

	case 3:
		difficulty = 2;
		break;

	default:
		set_difficulty();
}
}	//Change #'s for each function for radom #'s

void easy_multiplication() 
{
srand(time(NULL));

int x = rand()%easy_max;

int y = rand()%easy_max;


cout << "What is the answer to " << x << "*" << y << endl;

int answer;
cin >> answer;
cin.clear();
cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


if(answer == x*y)
{
cout << "Correct!" << endl;
cout << "" << endl;
number_correct++;
}
else
{
cout << "" << endl;
cout << "Sorry, INCORRECT the answer was  " << x*y << endl;
cout << "" << endl;
number_wrong++;
}

cout << "Would you like another problem? Press (1) for YES  or  (2) for NO" << endl;
int Easy_continue;

cin >> Easy_continue;
cout << "" << endl;
switch(Easy_continue)
{
case 1:
		easy_multiplication();
		break;
case 2:
	calculate_grade();
	if (grade > multiplication_easy_high_score)
	{
		cout << "New High Score" << endl;
		multiplication_easy_high_score = grade;
		fileOut.open("easy_multiplication_score.txt");
		fileOut << multiplication_easy_high_score;
		fileOut.close();
		fileIn.open("easy_multiplication_score.txt");
		int savedScoreAE;
		fileIn >> savedScoreAE;
		cout << "Saved score is: %" << savedScoreAE << ". \n";
		fileIn.close();
		cout << "" << endl;
	}
	number_correct = 0;
	number_wrong = 0;
	cout << "" << endl;
	startGame();
	break;

default:
	easy_multiplication();
}
}

void medium_multiplication() 
{
srand(time(NULL));

int x = rand()%(medium_max - medium_min)+medium_min;

int y = rand()%(medium_max - medium_min)+medium_min;


cout << "What is the answer to " << x << "*" << y << endl;

int answer;
cin >> answer;
cin.clear();
cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


if(answer == x*y)
{
cout << "Correct!" << endl;
cout << "" << endl;
number_correct++;
}
else
{
cout << "" << endl;
cout << "Sorry, INCORRECT the answer was  " << x*y << endl;
cout << "" << endl;
number_wrong++;
}

{
cout << "Would you like another problem? Press (1) for YES  or  (2) for NO" << endl;
int Easy_continue;
cin >> Easy_continue;
cout << "" << endl;
switch(Easy_continue)
{
case 1:
		medium_multiplication();
		break;
case 2:
	calculate_grade();
	if(grade > multiplication_medium_high_score)
	{
		cout << "New High Score" << endl;
		multiplication_medium_high_score = grade;
		fileOut.open("medium_multiplication_score.txt");
		fileOut << multiplication_medium_high_score;
		fileOut.close();
		fileIn.open("medium_multiplication_score.txt");
		savedScoreAE;
		fileIn >> savedScoreAE;
		cout << "Saved score is: %" << savedScoreAE << ". \n";
		fileIn.close();
		cout<<""<<endl;
	}
	number_correct=0;
	number_wrong= 0;
	cout << "" << endl;
	startGame();
	break;

	default:
	medium_multiplication();
}
}


 
}


void hard_multiplication()
{
srand(time(NULL));

int x = rand()%(hard_max - hard_min)+hard_min;

int y = rand()%(hard_max - hard_min)+hard_min;


cout << "What is the answer to " << x << "*" << y << endl;

int answer;
cin >> answer;
cin.clear();
cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


if(answer == x*y)
{
cout << "Correct!" << endl;
cout << "" << endl;
number_correct++;
}

else
{
cout << "" << endl;
cout << "Sorry, INCORRECT the answer was  " << x*y << endl;
cout << "" << endl;
number_wrong++;
}

cout << "Would you like another problem? Press (1) for YES  or  (2) for NO" << endl;

int Easy_continue;
cin >> Easy_continue;
cout << "" << endl;
switch(Easy_continue)
{
case 1:
		hard_multiplication();
		break;
case 2:
	calculate_grade();
	multiplication_hard_high_score = grade;
	fileOut.open("hard_multiplication_score.txt");
	fileOut << multiplication_hard_high_score;
	fileOut.close();
	fileIn.open("hard_multiplication_score.txt");
	savedScoreAE;
	fileIn >> savedScoreAE;
	cout << "Saved score is: %" << savedScoreAE << ". \n";
	fileIn.close();
	cout<<""<<endl;
	number_correct=0;
	number_wrong= 0;
	cout << "" << endl;
	startGame();
	break;

	default:
	hard_multiplication();
}


 
}


void easy_addition()
{
srand(time(NULL));

int x = rand()%easy_max;

int y = rand()%easy_max;


cout << "What is the answer to " << x << "+" << y << endl;

int answer;
cin >> answer;
cin.clear();
cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


if(answer == x+y)
{
cout << "Correct!" << endl;
cout << "" << endl;
number_correct++;
}
else
{
cout << "" << endl;
cout << "Sorry, INCORRECT the answer was  " << x+y << endl;
cout << "" << endl;
number_wrong++;
}

cout << "Would you like another problem? Press (1) for YES  or  (2) for NO" << endl;

int Easy_continue;

cin >> Easy_continue;
cout << "" << endl;
switch(Easy_continue)
{
case 1:
		easy_addition();
		break;
case 2:
	calculate_grade();
	if(grade > addition_easy_high_score)
	{
		addition_easy_high_score = grade;
		fileOut.open("easy_addition_score.txt");
		fileOut << addition_easy_high_score;
		fileOut.close();
		fileIn.open("easy_addition_score.txt");
		savedScoreAE;
		fileIn >> savedScoreAE;
		cout << "Saved score is: %" << savedScoreAE << ". \n";
		fileIn.close();
		cout<<""<<endl;
	}
	number_correct=0;
	number_wrong= 0;
	cout<<""<<endl;
	startGame();
	break;

	default:
	easy_addition();
}


 
}


void medium_addition()
{
srand(time(NULL));

int x = rand()%181;

int y = rand()%181;


cout << "What is the answer to " << x << "+" << y << endl;

int answer;
cin >> answer;
cin.clear();
cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


if(answer == x+y)
{
cout << "Correct!" << endl;
cout << "" << endl;
number_correct++;
}
else
{
cout << "" << endl;
cout << "Sorry, INCORRECT the answer was  " << x+y << endl;
cout << "" << endl;
number_wrong++;
}
cout << "Would you like another problem? Press (1) for YES  or  (2) for NO" << endl;

int Easy_continue;
cin >> Easy_continue;
cout << "" << endl;
switch(Easy_continue)
{
case 1:
		medium_addition();
		break;
case 2:
	calculate_grade();
	if(grade > addition_medium_high_score)
	{
	cout << "New High Score" << endl;
	addition_medium_high_score = grade;
	fileOut.open("medium_addition_score.txt");
	fileOut << addition_medium_high_score;
	fileOut.close();
	fileIn.open("medium_addition_score.txt");
	int savedScoreAE;
	fileIn >> savedScoreAE;
	cout << "Saved score is: %" << savedScoreAE << ". \n";
	fileIn.close();
	cout<<""<<endl;
	}
	number_correct=0;
	number_wrong= 0;
	cout<<""<<endl;
	startGame();
	break;

	default:
	medium_addition();
}
}

void hard_addition() 
{
srand(time(NULL));

int x = rand()%501;

int y = rand()%501;


cout << "What is the answer to " << x << "+" << y << endl;

int answer;
cin >> answer;
cin.clear();
cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


if(answer == x+y)
{
cout << "Correct!" << endl;
cout << "" << endl;
number_correct++;
}
else
{
cout << "" << endl;
cout << "Sorry, INCORRECT the answer was  " << x+y << endl;
cout << "" << endl;
number_wrong++;
}

cout << "Would you like another problem? Press (1) for YES  or  (2) for NO" << endl;

int Easy_continue;
cin >> Easy_continue;
cout << "" << endl;
switch(Easy_continue)
{
case 1:
		hard_addition();
		break;
case 2:
	calculate_grade();
	if (grade > addition_hard_high_score)
	{
		cout << "New High Score" << endl;
		addition_hard_high_score = grade;
		cout << "" << endl;
	}
	number_correct=0;
	addition_hard_high_score = grade;
	fileOut.open("hard_addition_score.txt");
	fileOut << addition_hard_high_score;
	fileOut.close();
	fileIn.open("hard_addition_score.txt");
	int savedScoreAE;
	fileIn >> savedScoreAE;
	cout << "Saved score is: %" << savedScoreAE << ". \n";
	number_wrong= 0;
	cout << "" << endl;
	startGame();
	break;

	default:
	hard_addition();
}


 
}

void easy_subtraction()
{
srand(time(NULL));

int x = rand()%easy_max;

int y = rand()%easy_max;


cout << "What is the answer to " << x << "-" << y << endl;

int answer;
cin >> answer;
cin.clear();
cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


if(answer == x-y)
{
cout << "Correct!" << endl;
cout << "" << endl;
number_correct++;
}
else
{
cout << "" << endl;
cout << "Sorry, INCORRECT the answer was  " << x-y << endl;
cout << "" << endl;
number_wrong++;
}

cout << "Would you like another problem? Press (1) for YES  or  (2) for NO" << endl;

int Easy_continue;
cin >> Easy_continue;
cout << "" << endl;
switch(Easy_continue)
{
case 1:
		easy_subtraction();
		break;
case 2:
	{
	calculate_grade();
	if(grade > subtraction_easy_high_score)
	{
		cout << "New High Score" << endl;
		subtraction_easy_high_score = grade;
		cout<<""<<endl;
	}
	number_correct=0;
	subtraction_easy_high_score = grade;
	fileOut.open("easy_subtraction__score.txt");
	fileOut << subtraction_easy_high_score;
	fileOut.close();
	savedScoreAE = grade;
	cout << "Saved score is: " << savedScoreAE << "%. \n";
	number_wrong= 0;
	cout <<""<<endl;
	startGame();
	
	}
	break;
	default:
	easy_subtraction();
}
}

void medium_subtraction() 
{
srand(time(NULL));

int x = rand()%(medium_max - medium_min)+medium_min;

int y = rand()%(medium_max - medium_min)+medium_min;



cout << "What is the answer to " << x << "-" << y << endl;

int answer;
cin >> answer;
cin.clear();
cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


if(answer == x-y)
{
cout << "Correct!" << endl;
cout << "" << endl;
number_correct++;
}
else
{
cout << "" << endl;
cout << "Sorry, INCORRECT the answer was  " << x-y << endl;
cout << "" << endl;
number_wrong++;
}

cout << "Would you like another problem? Press (1) for YES  or  (2) for NO" << endl;
int Easy_continue;
cin >> Easy_continue;
cout << "" << endl;
switch(Easy_continue)
{
case 1:
		medium_subtraction();
		break;
case 2:
	calculate_grade();
	if (grade > subtraction_medium_high_score)
	{
		cout << "New High Score" << endl;
		subtraction_medium_high_score = grade;
		cout << "" << endl;
	}
	number_correct=0;
	subtraction_medium_high_score = grade;
	fileOut.open("medium_subtraction__score.txt");
	fileOut << subtraction_medium_high_score;
	fileOut.close();
	savedScoreAE = grade;
	cout << "Saved score is: " << savedScoreAE << "%. \n";
	number_wrong= 0;
	cout << "" << endl;
	startGame();
	break;

	default:
	medium_subtraction();
}



 
}


void hard_subtraction() 
{
srand(time(NULL));

int x = rand()%375+10;


int y = rand()%225+15;


cout << "What is the answer to " << x << "-" << y << endl;

int answer;
cin >> answer;
cin.clear();
cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


if(answer == x-y)
{
cout << "Correct!" << endl;
cout << "" << endl;
number_correct++;
}
else
{
cout << "" << endl;
cout << "Sorry, INCORRECT the answer was  " << x-y << endl;
cout << "" << endl;
number_wrong++;
}

cout << "Would you like another problem? Press (1) for YES  or  (2) for NO" << endl;

int Easy_continue;
cin >> Easy_continue;
cout << "" << endl;
switch(Easy_continue)
{
case 1:
		hard_subtraction();
		break;
case 2:
	calculate_grade();
	if (grade > subtraction_hard_high_score)
	{
		cout << "New High Score" << endl;
		subtraction_hard_high_score = grade;
		cout << "" << endl;
	}
	number_correct=0;
	subtraction_hard_high_score = grade;
	fileOut.open("hard_subtraction__score.txt");
	fileOut << subtraction_hard_high_score;
	fileOut.close();
	savedScoreAE = grade;
	cout << "Saved score is: " << savedScoreAE << "%. \n";
	cout << "Saved score is: %" << savedScoreAE << ". \n";
	number_wrong= 0;
	cout << "" << endl;
	startGame();
	break;

	default:
	hard_subtraction();
}


 
}

void easy_division() 
{                                                         
srand(time(NULL));
int x;
int y;
while(true)
{
x = rand()%101+2;
y = rand()%101+2;

if((x % y == 0) && (x != y))
{
	break;
}
}


cout << "What is the answer to " << x << "/" << y << endl;

int answer;
cin >> answer;
cin.clear();
cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


if(answer == x/y)
{
cout << "Correct!" << endl;
cout << "" << endl;
number_correct++;
}
else
{
cout << "" << endl;
cout << "Sorry, INCORRECT the answer was  " << x/y << endl;
cout << "" << endl;
number_wrong++;
}

cout << "Would you like another problem? Press (1) for YES  or  (2) for NO" << endl;
int Easy_continue;

cin >> Easy_continue;
cout << "" << endl;
switch(Easy_continue)
{
case 1:
	easy_division();
	break;
case 2:
	calculate_grade();
	if(grade > division_easy_high_score)
	{
		cout << "New High Score" << endl;
		division_easy_high_score = grade;
		cout<<""<<endl;
	}
	{
	number_correct=0;
	division_easy_high_score = grade;
	fileOut.open("easy_division__score.txt");
	fileOut << division_easy_high_score;
	fileOut.close();
	savedScoreAE = grade;
	cout << "Saved score is: " << savedScoreAE << "%. \n";
	number_wrong= 0;
	cout << "" << endl;
	startGame();
	}

	break;
	default:	
	easy_division();
}
}


void medium_division() 
{
srand(time(NULL));
int x;
int y;
while(true)
{
x = rand()%176+2;
y = rand()%176+2;

if((x % y == 0) && (x != y))
{
	break;
}
}


cout << "What is the answer to " << x << "/" << y << endl;

int answer;
cin >> answer;
cin.clear();
cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


if(answer == x/y)
{
cout << "Correct!" << endl;
cout << "" << endl;
number_correct++;
}
else
{
cout << "" << endl;
cout << "Sorry, INCORRECT the answer was  " << x/y << endl;
cout << "" << endl;
number_wrong++;
}


cout << "Would you like another problem? Press (1) for YES  or  (2) for NO" << endl;
int Easy_continue;

cin >> Easy_continue;
cout << "" << endl;
switch(Easy_continue)
{
case 1:
	medium_division();
	break;
case 2:
	calculate_grade();
	if(grade > division_medium_high_score)
	{
	cout << "New High Score" << endl;
	division_medium_high_score = grade;
	cout<<""<<endl;
	}
	number_correct=0;
	division_medium_high_score = grade;
	fileOut.open("medium_division__score.txt");
	fileOut << division_medium_high_score;
	fileOut.close();
	savedScoreAE = grade;
	cout << "Saved score is: " << savedScoreAE << "%. \n";
	number_wrong= 0;
	cout << "" << endl;
	startGame();
	cout<<""<<endl;
	cout << "" << endl;
	startGame();
	
	break;
	default:
	medium_division();
}
}

void hard_division() 
{
srand(time(NULL));
int x;
int y;
while(true)
{
x = rand()%251+2;
y = rand()%1251+2;

if((x % y == 0) && (x != y))
{
	break;
}
}


cout << "What is the answer to " << x << "/" << y << endl;

int answer;
cin >> answer;
cin.clear();
cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


if(answer == x/y)
{
cout << "Correct!" << endl;
cout << "" << endl;
number_correct++;
}
else
{
cout << "" << endl;
cout << "Sorry, INCORRECT the answer was  " << x/y << endl;
cout << "" << endl;
number_wrong++;
}

cout << "Would you like another problem? Press (1) for YES  or  (2) for NO" << endl;
int Easy_continue;

cin >> Easy_continue;
cout << "" << endl;
switch(Easy_continue)
{
case 1:
	hard_division();
	break;
case 2:
	calculate_grade();
	if (grade > division_hard_high_score)
	{
		cout << "New High Score" << endl;
		division_hard_high_score = grade;
		cout << "" << endl;
	}
	number_correct=0;
	fileOut.open("hard_division__score.txt");
	fileOut << division_hard_high_score;
	fileOut.close();
	savedScoreAE = grade;
	cout << "Saved score is: " << savedScoreAE << "%. \n";
	number_wrong= 0;
	startGame();
	cout << "" << endl;
	break;

	default:
	hard_division();

}
}

void calculate_grade()
{
grade = number_correct/(number_correct + number_wrong) * 100;
cout << "" << endl;
cout << "Here is your score." << endl;
cout << number_correct << " / " << (number_correct + number_wrong) << endl;
cout << grade << "%" << endl;
}


void easy_exponents()
{
	srand(time(NULL));

	float x = rand() % easy_max;

	int y = rand() % easy_max;


	cout << "What is the answer to " << x << "^" << y << endl;

	int answer;
	cin >> answer;
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


	if (answer == pow(x, y))
	{
		cout << "Correct!" << endl;
		cout << "" << endl;
		number_correct++;
	}
	else
	{
		cout << "" << endl;
		cout << "Sorry, INCORRECT the answer was  " << pow(x,y) << endl;
		cout << "" << endl;
		number_wrong++;
	}

	cout << "Would you like another problem? Press (1) for YES  or  (2) for NO" << endl;
	int Easy_continue;

	cin >> Easy_continue;
	cout << "" << endl;
	switch (Easy_continue)
	{
	case 1:
		easy_exponents();
		break;
	case 2:
		calculate_grade();
		if (grade > exponents_easy_high_score)
		{
			cout << "New High Score" << endl;
			exponents_easy_high_score = grade;
			cout << "" << endl;
		}
		number_correct = 0;
		exponents_easy_high_score = grade;
		fileOut.open("easy_exponents__score.txt");
		fileOut << exponents_easy_high_score;
		fileOut.close();
		savedScoreAE = grade;
		cout << "Saved score is: " << savedScoreAE << "%. \n";
		number_wrong = 0;
		startGame();
		cout << "" << endl;
		break;

	default:
		easy_exponents();

	}
}

void medium_exponents()
{
	srand(time(NULL));

	float x = rand() % (medium_max - medium_min) + medium_min;

	int y = rand() % (medium_max - medium_min) + medium_min;


	cout << "What is the answer to " << x << "^" << y << endl;

	int answer;
	cin >> answer;
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	if (answer == pow(x, y))
	{
		cout << "Correct!" << endl;
		cout << "" << endl;
		number_correct++;
	}
	else
	{
		cout << "" << endl;
		cout << "Sorry, INCORRECT the answer was  " << pow(x, y) << endl;
		cout << "" << endl;
		number_wrong++;
	}

	cout << "Would you like another problem? Press (1) for YES  or  (2) for NO" << endl;
	int Easy_continue;

	cin >> Easy_continue;
	cout << "" << endl;
	switch (Easy_continue)
	{
	case 1:
		medium_exponents();
		break;
	case 2:
		calculate_grade();
		if (grade > exponents_medium_high_score)
		{
			cout << "New High Score" << endl;
			exponents_medium_high_score = grade;
			cout << "" << endl;
		}
		number_correct = 0;
		exponents_medium_high_score = grade;
		fileOut.open("medium_exponents__score.txt");
		fileOut << exponents_medium_high_score;
		fileOut.close();
		savedScoreAE = grade;
		cout << "Saved score is: " << savedScoreAE << "%. \n";
		number_wrong = 0;
		startGame();
		cout << "" << endl;
		break;

	default:
		medium_exponents();

	}
}

void hard_exponents()
{
	srand(time(NULL));

	float x = rand() % (hard_max - hard_min) + hard_min;

	int y = rand() % (hard_max - hard_min) + hard_min;


	cout << "What is the answer to " << x << "^" << y << endl;

	int answer;
	cin >> answer;
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


	if (answer == pow(x, y))
	{
		cout << "Correct!" << endl;
		cout << "" << endl;
		number_correct++;
	}
	else
	{
		cout << "" << endl;
		cout << "Sorry, INCORRECT the answer was  " << pow(x, y) << endl;
		cout << "" << endl;
		number_wrong++;
	}

	cout << "Would you like another problem? Press (1) for YES  or  (2) for NO" << endl;
	int Easy_continue;

	cin >> Easy_continue;
	cout << "" << endl;
	switch (Easy_continue)
	{
	case 1:
		hard_exponents();
		break;
	case 2:
		calculate_grade();
		if (grade > exponents_hard_high_score)
		{
			cout << "New High Score" << endl;
			exponents_hard_high_score = grade;
			cout << "" << endl;
		}
		number_correct = 0;
		exponents_hard_high_score = grade;
		fileOut.open("hard_exponents__score.txt");
		fileOut << exponents_hard_high_score;
		fileOut.close();
		savedScoreAE = grade;
		cout << "Saved score is: " << savedScoreAE << "%. \n";
		number_wrong = 0;
		startGame();
		cout << "" << endl;
		break;

	default:
		hard_exponents();

	}
}


void startGame()
{
set_difficulty();
cout << "For Addition press (1)" << endl; //--------------------------------
cout << "--------------------------------" << endl;
cout << "For Subtraction Press (2)" << endl;
cout << "--------------------------------" << endl;
cout << "For Multiplication Press (3)" << endl;
cout << "--------------------------------" << endl;
cout << "For Division Press (4)" << endl;
cout << "--------------------------------" << endl;
cout << "For Exponents Press (5)" << endl;
cout << "--------------------------------" << endl;

int answer;
cin >> answer;
cout << "" << endl;
cin.clear();
cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
switch(answer)
{
case 1:
	if(difficulty == 0)
	{
		easy_addition();
	}
	else if(difficulty == 1)
	{
		medium_addition();
	}
	else
	{
		hard_addition();
	}
	break;
case 2:
	if(difficulty == 0)
	{
		easy_subtraction();
	}

	else if(difficulty == 1)
	{
		medium_subtraction();
	}

	else
	{
		hard_subtraction();
	}
	break;
case 3:
	if(difficulty == 0)
	{
		easy_multiplication();
	}

	else if(difficulty == 1)
	{
		medium_multiplication();
	}

	else
	{
		hard_multiplication();
	}
	break;
case 4:
	if(difficulty == 0)
	{
		easy_division();
	}

	else if(difficulty == 1)
	{
		medium_division();
	}

	else
	{
		hard_division();
	}
	break;

case 5:
	if (difficulty == 0)
	{
		easy_exponents();
	}

	else if (difficulty == 1)
	{
		medium_exponents();
	}

	else
	{
		hard_exponents();
	}
	break;

	default:
	cout << "Invalid Key" << endl;
	cout <<"" << endl;
	startGame();


}
}


int main()
{
startGame();
}


//file io  (input-output) inputs thins to text files. So i can save high scores!