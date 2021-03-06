// MadLibs.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include <cstdlib>
#include "stdafx.h"
#include "gameText.h"
#include "stories.h"

using namespace std;

char askYesNo(string question);

int main() {
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	char playAgain;
	do {
		system("cls");
		readFile("titleArt.txt");
		char playGame = askYesNo("Are you ready for the most fun you can have with text? ");

		if (playGame == 'Y') {
			cout << "Great. Let's get started. \n";
			char needHelp = askYesNo("\nDo you need instructions? ");
			if (needHelp == 'Y') {
				cout << "\nHelp is on the way." << endl;
				system("cls");
				readFile("instructionArt.txt");
				readFile("instructionText.txt");
				system("pause");
				system("cls");
				getStory();
			}
			else {
				getStory();
			}
		}
		else {
			cout << "\nAll right. See you later." << endl;
			return 0;
		}

		playAgain = askYesNo("\nWould you like to play again? ");
	} while (playAgain == 'Y');
}






