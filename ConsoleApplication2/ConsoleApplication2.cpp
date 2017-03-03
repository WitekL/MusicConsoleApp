// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <random>
#include <string>
#include <ctime>
#include <conio.h>
#include <algorithm>
#include <iterator>

using namespace std;

string sounds[15] = { "A", "Bb", "B", "C", "C#", "D", "Eb", "F", "F#", "Gb", "Ab", "Db", "Cb", "G", "E" };

void checkScale(string scale, string root, string arr[]) {
	string distancesSharp[12] = { "A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#" };
	string distancesFlat[12]  = { "A", "Bb", "B", "C", "Db", "D", "Eb", "E", "F", "Gb", "G", "Ab" };
	string intervals[12] = { "unison", "minor 2nd", "major 2nd", "minor 3rd", "major 3rd", "perfect 4th", "dim 5th", "perfect 5th", "minor 6th", "major 6th", "minor 7th", "major 7th"};
	int intVals[12] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };

	
	for (int i = 0; i <= 6; i++) {
		int p = distance(find(distancesSharp, distancesSharp + 12, root), find(distancesSharp, distancesSharp + 12, arr[i])); //find the value of answer[i] in distances array. TBI
		cout << arr[i] << endl;
			cout << p;
		
	}
}

void scales() {
	string answer[7];
	srand(time(NULL));
	int i = rand() % 15;
	string scale[2] = { "dur", "moll" };
	int j = rand() % 2;
	string root = sounds[i];
	string scl = scale[j];
	cout << sounds[i] << " " << scale[j];
	for (int k = 0; k <= 6; k++) {
		cin >> answer[k];
	}
	checkScale(scl, root, answer);
}



void intervals() {
	int i = rand() % 15;
	int j = rand() % 15;
	cout << sounds[i] << " " << sounds[j];
}

	
int main()
{
	char ch;
	int x = 0;
	while (1) {
		cout << "Wybierz æwiczenie" << endl << "1. Skale" << endl << "2. Interwa³y" << endl;
		ch = _getch();
		x = ch - '0';

		if (x == 1) scales();
		else if (x == 2) intervals();
		else cout << "u fgt";

		cout << endl << endl << endl << endl;
	}

    return 0;
}

