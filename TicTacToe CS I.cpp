// Dilli Kadariya
// TicTacToe Game using 2D Arrays

#include <iostream>
using namespace std;

void takeTurn(int player, char board[][3]);
void displayBoard(char board[][3]);
void pickSpace(int player, char board[][3]);
bool isWinner(char board[][3]);
bool isValid(int row, int col, char board[][3]);

char board[3][3] = { { ' ', ' ', ' ' },
                     { ' ', ' ', ' ' },
                     { ' ', ' ', ' ' } };

int main()
{
    int count = 0;
    int player = 1; 
    while (!isWinner(board))
    {
        displayBoard(board);
        pickSpace(player, board);
        player = (player % 2) + 1;
    }
        displayBoard(board);
        cout << "Player " << (player % 2) + 1 << " wins!" << endl;
    return 0;
}

void displayBoard(char board[][3])
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << board[row][col];
            if (col < 2) 
            {
                cout << " | ";
            }
        }
        cout << endl;
        if (row < 2) {
            cout << "---------" << endl;
        }
    }
}

void pickSpace(int player, char board[][3])
{
    int row, col;
    do {
        cout << "Player " << player << ", enter your row selection (1-3): ";
        cin >> row;
        cout << "Player " << player << ", enter your column selection (1-3): ";
        cin >> col;
    } while (!isValid(row - 1, col - 1, board)); 

    board[row - 1][col - 1] = (player == 1) ? 'X' : 'O';
}

bool isValid(int row, int col, char board[][3])
{
    if (row < 0 || row >= 3 || col < 0 || col >= 3) {
        cout << "Invalid input. Row and column should be between 1 and 3." << endl;
        return false;
    }
    if (board[row][col] != ' ') {
        cout << "That space is already taken. Choose a different one." << endl;
        return false;
    }
    return true;
}

bool isWinner(char board[][3]) {
    // Check for a winner in each row
    for (int row = 0; row < 3; row++) {
        if (board[row][0] == board[row][1] && board[row][1] == board[row][2] && board[row][0] != ' ') {
            return true;
        }
    }
    // Check for a winner in each column
    for (int col = 0; col < 3; col++) {
        if (board[0][col] == board[1][col] && board[1][col] == board[2][col] && board[0][col] != ' ') {
            return true;
        }
    }
    // Check for a winner in diagonals
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') ||
        (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')) {
        return true;
    }
    // If no winner, return false
    return false;
}
