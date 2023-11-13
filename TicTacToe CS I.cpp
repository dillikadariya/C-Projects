// TicTacToe CS I.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Dilli Kadariya

#include <iostream>
using namespace std;

void takeTurn(int player, char board[][3]);
void displayBoard(char board[][3]);
void pickSpace(int player, char board[][3]);


char board[3][3] = { { ' ', ' ', ' ' },
	                 { ' ', ' ', ' ' }, 
	                 { ' ', ' ', ' ' } };


int main()
{    
	
	int count = 0;
	taketurn((count % 2 + 1), board);

}

void takeTurn(int player, char board[][3]) 
{
	displayBoard();
	pickSpace();
}

void displayBoard(char board[][3])
{
	const int row = 3, col = 3;
	
	int board[row][col] = { { ' ', ' ', ' ' },
					 { ' ', ' ', ' ' },
					 { ' ', ' ', ' ' } };
	for (int row = 0; row < 3; row++)
		cout << "____";
	cout << "|____";
	{
		for (int col = 0; col < 3; col++)
		{
			cout << board[row][col] << "__|__ ";
		}
		cout << endl;
	}
}

void pickSpace(int player, char board[][3])
{
	int row;
	int col;
	do
	{
		cout << "Enter your row selection : ";
		cin >> row;
		cout << "Enter your column selection : ";
		cin >> col;
	} while (isValid(row,col,board));
	board[row][col] = '0'; 'x';
}
	bool isValid(int row, int col, char board[][3])
	{
		if (row < 1 || row>3)
			return false;
		if (col < 1 || col>3)
			return false;
		if (board[row][col] != '____')
			return false;
		else
		return true;
	}
	
	char isWinner(char board[][3])
	{
		if (board[0][0] = board[0][1] = board[0][2])
			cout << "You Won" << endl;
		if (board[0][0] = board[0][1] = board[0][2])
			cout << "You Won" << endl;
		if (board[0][0] = board[0][1] = board[0][2])
			cout << "You Won" << endl;

	}



