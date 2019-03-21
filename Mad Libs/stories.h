#pragma once
#ifndef STORIES_H
#define STORIES_H

#include <vector>

void spongebob() {

	vector<string> questions;
	vector<string> values;

	questions = { "Name a fruit. ", "Now a noun. ", "And a name? " , "An adjective? ", "Color? ", "Another adjective. " , "And another adjective. ", "A second noun? ", "A verb? ", "Another verb? " , "A third noun? " , "A third verb? ", "And, finally, an animal. " };
	for (unsigned int i = 0; i < questions.size(); i++) {
		cout << questions[i];
		string answer;
		getline(cin, answer);
		values.push_back(answer);
	}
	system("cls");
	readFile("bobArt.txt");
	cout << "\n\n\n\nOHHHHHH...Who lives in a " << values[0] << " under the " << values[1] << " ?\n" << values[2] << " Squarepants!\n" << values[3] << " and " << values[4] << " and " << values[5] << " is he!\n" << values[2] << " Squarepants!\nIf " << values[6] << " " << values[7] << " be something you " << values[8] << "...\n" << values[2] << " Squarepants!\nThen " << values[9] << " on the " << values[10] << " and " << values[11] << " like a " << values[12] << "!\n" << values[2] << " Squarepants!\nReady!\n" << values[2] << " Squarepants!\n" << values[2] << " Squarepants!\n" << values[2] << " Squarepants!\n" << values[2] << "!!!!!!!!!" << " Squarepants!!!!!!!!!\n";
}

void romeo() {
	cout << "Wherefore art thou Romeo?";
}

void getStory() {
	readFile("marioArt.txt");
	spongebob();
	cout << string(10, '\n');
	system("pause");
}

#endif