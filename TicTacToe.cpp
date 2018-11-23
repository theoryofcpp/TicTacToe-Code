#include "pch.h"
#include <iostream>

using namespace std;

char square[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int checkGameStatus();
void board();

// main function
int main() {
	int player = 1, i, choice;
	char mark;

	do {
		board();
		
		// player selecting condition
		player = (player % 2) ? 1 : 2;

		cout << "Player " << player << ", enter a number: \n";
		cin >> choice;

		mark = (player == 1) ? 'X' : 'O';

		// main game statements
		if (choice == 1 && square[1] == '1') {
			square[1] = mark;
		}
		else if (choice == 2 && square[2] == '2') {
			square[2] = mark;
		}
		else if (choice == 3 && square[3] == '3') {
			square[3] = mark;
		}
		else if (choice == 4 && square[4] == '4') {
			square[4] = mark;
		}
		else if (choice == 5 && square[5] == '5') {
			square[5] = mark;
		}
		else if (choice == 6 && square[6] == '6') {
			square[6] = mark;
		}
		else if (choice == 7 && square[7] == '7') {
			square[7] = mark;
		}
		else if (choice == 8 && square[8] == '8') {
			square[8] = mark;
		}
		else if (choice == 9 && square[9] == '9') {
			square[9] = mark;
		}
		else {
			cout << "Invalid Move\n";

			player--;
			cin.ignore();
			cin.get();
		}
		i = checkGameStatus();
		player++;
	} while (i == -1);
	
	board();
	if (i == 1) {
		cout << "===>\aPlayer " << --player << " win\n";
	}
	else {
		cout << "===>\aGame Draw\n";
	}

	cin.ignore();
	cin.get();
	return 0;
}

// Function to return game status
// 1 for game is over with result
// -1 for game is in progress
// 0 for game is over and no result
int checkGameStatus() {
	if (square[1] == square[2] && square[2] == square[3]) {
		return 1;
	}
	else if (square[4] == square[5] && square[5] == square[6]) {
		return 1;
	}
	else if (square[7] == square[8] && square[8] == square[9]) {
		return 1;
	}
	else if (square[1] == square[4] && square[4] == square[7]) {
		return 1;
	}
	else if (square[2] == square[5] && square[5] == square[8]) {
		return 1;
	}
	else if (square[3] == square[6] && square[6] == square[9]) {
		return 1;
	}
	else if (square[1] == square[5] && square[5] == square[9]) {
		return 1;
	}
	else if (square[3] == square[5] && square[5] == square[7]) {
		return 1;
	}
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9') {
		return 0;
	}
	else {
		return -1;
	}
}

// Function to Draw Board of Tic Tac Toe with Players Mark
void board() {
	system("cls");
	cout << "\n\nTic Tac Toe\n\n";

	cout << "Player 1(X) - Player 2(O)" << endl << endl;

	cout << "		|		|		" << endl;
	cout << "	" << square[1] << "	|	" << square[2] << "	|	" << square[3] << endl;

	cout << "________________|_______________|_______________" << endl;
	cout << "		|		|		" << endl;

	cout << "	" << square[4] << "	|	" << square[5] << "	|	" << square[6] << endl;

	cout << "________________|_______________|_______________" << endl;
	cout << "		|		|		" << endl;

	cout << "	" << square[7] << "	|	" << square[8] << "	|	" << square[9] << endl;

	cout << "		|		|		" << endl;
	cout << endl << endl;
}
