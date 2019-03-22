#pragma once
#ifndef GAMETEXT_H
#define GAMETEXT_H

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include <windows.h>
#undef max

using namespace std;

string readTextFile(ifstream&);

void readFile(string fileName) {
	ifstream Reader(fileName);
	string title = readTextFile(Reader);
	HANDLE textColor = GetStdHandle(STD_OUTPUT_HANDLE);
	unsigned int randNum = rand() % 13 + 1;
	SetConsoleTextAttribute(textColor, randNum);
	cout << title;
	Reader.close();
	SetConsoleTextAttribute(textColor, 7);
}

string readTextFile(ifstream& File)
{
	string Lines = "";
	if (File)
	{
		while (File.good())
		{
			string TempLine;
			getline(File, TempLine);
			TempLine += "\n";

			Lines += TempLine;
		}
		return Lines;
	}
	else
	{
		return "ERROR! File does not exist. Please try again.";
	}
}

char askYesNo(string question) {
	char response;
	do {
		cout << question << " Y / N ? ";
		cin >> response;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		response = toupper(response);
	} while (response != 'Y' && response != 'N');

	return response;
}
#endif
