#include<iostream>
using namespace std;


//function prototypes
void printBoard(const char board[3][3]);

void PlayerTurn(char board[3][3], char player);

bool checkWin(const char board[3][3]);

bool checkFull(const char board[3][3]);

int main() {

	char board[3][3] = { {'-', '-', '-'}, {'-', '-', '-'}, {'-', '-', '-'} }; // 2d array to hold board
	char player = 'X'; // keeps track of whose turn it is
	bool endGame = false; // runs the game loop

	while (endGame == false) {

		PlayerTurn(board, player);//user input
		printBoard(board);// print vurrent board
		

		if (checkWin(board) == true) {
			cout << "player " << player << " wins!" << endl;
			endGame = true; // quit game loop

		}
		else if (checkFull(board) == true) {
			cout << "its a draw!!!";
			endGame = true;
		}

		if (endGame == false)
			cout << "player " << player << "'s turn!" << endl << endl;

		

		if (player == 'X') // if player X, change to Y
			player = 'Y';

		else if (player == 'Y') // if player Y, change to X
			player = 'X';

		

	}

	


}

//function definition
void printBoard(const char board[3][3]) {
	for (int i = 0; i < 3; i++) {// handles rows
		for (int j = 0; j < 3; j++) {// handle columns
			cout << board[i][j] << " ";
		}
		cout << endl;

	}
}

 //fuction definition
void PlayerTurn(char board[3][3], char player) {

	//declare row and col int variables
	int row;
	int col;

	//ask user for row and col and store them
	if (player == 'X')
		cout << "Player X, type row and column to place X:" << endl;
	else
		cout << "Player Y, type row and column to place O:" << endl;

	cin >> row;
	cin >> col;

	//place the X or the O in to the board (minus 1 since arrays start at 0)
	if (player == 'X')
		board[row - 1][col - 1] = 'X'; // place an X for player 1

	else if (player == 'Y')
		board[row - 1][col - 1] = 'O'; // place an X for player 1


}


 //function definition
bool checkWin(const char board[3][3]) {

	//check horizontal and vertical lines---------------
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			//check rows
			if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != '-')
				return true;
			// check columns
			if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != '-')
				return true;
		}
	}
	//check diagonals-------------------------------------------
	// 
	// 0 = 1, 1 = 2, 2 = 3
	// 
	//check top left to bottom right
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != '-')
		return true;
	//check top right to bottom left
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != '-')
		return true;


	return false; //you'll only get this if none of the above statements return true

}


bool checkFull(const char board[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (board[i][j] == '-')
				return false;
		}
	} return true;
}
