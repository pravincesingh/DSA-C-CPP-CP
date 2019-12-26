

#include <iostream>
#include "conio.h"
#include <string>

using namespace std;


string spot1 = "1";
string spot2 = "2";
string spot3 = "3";
string spot4 = "4";
string spot5 = "5";
string spot6 = "6";
string spot7 = "7";
string spot8 = "8";
string spot9 = "9";

int playerTurn = 1;

void clearTable() {
	spot1 = "1";
	spot2 = "2";
	spot3 = "3";
	spot4 = "4";
	spot5 = "5";
	spot6 = "6";
	spot7 = "7";
	spot8 = "8";
	spot9 = "9";
}

int gameOver() {
	if (spot1 == spot2 && spot2 == spot3)
		return 1;
	else if (spot4 == spot5 && spot5 == spot6)
		return 1;
	else if (spot6 == spot7 && spot8 == spot9)
		return 1;
	else if (spot1 == spot4 && spot4 == spot7)
		return 1;
	else if (spot2 == spot5 && spot5 == spot8)
		return 1;
	else if (spot3 == spot6 && spot6 == spot9)
		return 1;
	else if (spot1 == spot5 && spot5 == spot9)
		return 1;
	else if (spot3 == spot5 && spot5 == spot7)
		return 1;
	else if (spot1 != "1" && spot2 != "2" && spot3 != "3" && spot4 != "4" && spot5 != "5" && spot6 != "6" && spot7 != "7" && spot8 != "8" && spot9 != "9")
		return 2;
	else
		return 0;
}

void changeSpot(int value, string letter) {
	if (value == 1 && spot1 == "1") {
		spot1 = letter;
	}
	else if (value == 2 && spot2 == "2") {
		spot2 = letter;
	}
	else if (value == 3 && spot3 == "3") {
		spot3 = letter;
	}
	else if (value == 4 && spot4 == "4") {
		spot4 = letter;
	}
	else if (value == 5 && spot5 == "5") {
		spot5 = letter;
	}
	else if (value == 6 && spot6 == "6") {
		spot6 = letter;
	}
	else if (value == 7 && spot7 == "7") {
		spot7 = letter;
	}
	else if (value == 8 && spot8 == "8") {
		spot8 = letter;
	}
	else if (value == 9 && spot9 == "9") {
		spot9 = letter;
	}
	else {
		cout << "The spot you entered does not exit or already has already been taken" << endl;
		playerTurn--;
	}
}

void drawTable() {


	cout << endl;

	cout << "  " << spot1 << "  |  " << spot2 << "  |  " << spot3 << "  " << endl;
	cout << "-----------------" << endl;
	cout << "  " << spot4 << "  |  " << spot5 << "  |  " << spot6 << "  " << endl;
	cout << "-----------------" << endl;
	cout << "  " << spot7 << "  |  " << spot8 << "  |  " << spot9 << "  " << endl;

	cout << "====================================================" << endl;

}

int playGame() {
	drawTable();

	int p1, p2;

	while (true) {
		if (playerTurn % 2 == 1) {
			cout << "Player 1 it's your turn" << endl;
			cin >> p1;

			changeSpot(p1, "X");

			drawTable();

			if (gameOver() == 1) {
				cout << endl << endl << endl;
				cout << "Player 1 is the winner!" << endl;
				cout << endl << endl;
				return 1;
			}
			else if (gameOver() == 2) {
				cout << endl << endl << endl;
				cout << "It's a Tie! No winner" << endl;
				cout << endl << endl;
				return 0;
			}
			playerTurn++;

		}

		if (playerTurn % 2 == 0) {
			cout << "Player 2 it's your turn" << endl;
			cin >> p2;
			changeSpot(p2, "O");

			drawTable();

			if (gameOver() == 1) {
				cout << endl << endl;
				cout << "PLayer 2 is the winner!" << endl;
				cout << endl << endl;
				return 2;
			}
			else if (gameOver() == 2) {
				cout << endl << endl << endl;
				cout << "It's a Tie! No winner" << endl;
				cout << endl << endl;
				return 0;
			}
			playerTurn++;
		}

	}
}

int main()
{
	char gameContinue = '0';
	int p1W = 0, p2W = 0, ties = 0;
	cout << "\n";
	cout << "\t**------------------------------------------------**" << "\n";
	cout << "\t||          Welcome to the Game of Tic Tac        ||" << "\n";
	cout << "\t**------------------------------------------------**" << "\n" << "\n";

	while (gameContinue != 'q') {
		clearTable();

		int whoWon = playGame();


		switch (whoWon) {
		case 1:
			p1W++;
			break;
		case 2:
			p2W++;
			break;
		case 0:
			ties++;
			break;
		}

		cout << "Player 1 has " << p1W << " number of wins." << endl;
		cout << "Player 2 has " << p2W << " number of wins." << endl;
		cout << "There has been " << ties << " number of ties." << endl << endl;

		cout << "If you would like to quit enter q" << endl;
		cout << "Enter anything else to continue playing" << endl;
		cin >> gameContinue;
	}


	cout << "\n";
	cout << "\t**------------------------------------------------**" << "\n";
	cout << "\t||               Thank you for playing            ||" << "\n";
	cout << "\t**------------------------------------------------**" << "\n" << "\n";
	return 0;

}
