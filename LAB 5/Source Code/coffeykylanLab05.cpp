#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

int main()
{
	int dice1Roll, dice2Roll, key, total = 0;
	bool won = false, playing = true;

	// set seed.
	srand(time(0));

	dice1Roll = rand() % 6 + 1;	// 1 to 6
	dice2Roll = rand() % 6 + 1;	// 1 to 6
	total = dice1Roll + dice2Roll;
	printf("You rolled %d\n", total);

	if (total == 7 || total == 11)  //win
		won = true;
	else
		if (total == 2 || total == 3 || total == 12) //lost
			won = false;
		else
			if (total >= 4 && total <= 6 || total >= 8 && total <= 10) {  //store as key
				key = total;
				printf("Setting goal to %d\n\n", key);
				do
				{
					dice1Roll = rand() % 6 + 1;	// 1 to 6
					dice2Roll = rand() % 6 + 1;	// 1 to 6
					total = dice1Roll + dice2Roll;
					printf("Rolling... %d\n", total);
					if (total == key) {
						won = false;
						playing = false;
					}
					else
						if (total == 7) {
							won = true;
							playing = false;
						}
				} while (playing);
			}

	if (won)
		cout << "Well Done!! - you are a winner!" << endl;
	else
		cout << "Bad Luck!! - you lost!" << endl;

	return 0;
}
