#include <iostream>
using namespace std;
int main()
{
    char board[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}};

    int moves = 0;
    char player;
    cout << "enter the Value";
    cin >> player;

    if (player != 'X' && player != 'O')
    {
        cout << "Invalid player\n";
        return 0;
    }

    while (moves < 9)
    {
        cout << "\nThe array: \n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }

        int position;
        cout << "enter the position to be inserted";
        cin >> position;

        if (position < 1 || position > 9)
        {
            cout << "Invalid position\n";
            continue;
        }

        int row = (position - 1) / 3;
        int col = (position - 1) % 3;

        if (board[row][col] == 'X' || board[row][col] == 'O')
        {
            cout << "Position already taken.\n";
            continue;
        }

        board[row][col] = player;
        moves++;

        for (int i = 0; i < 3; i++)
        {
            if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && (board[i][0] == 'X' || board[i][0] == 'O'))
            {
                cout << "Player " << player << " Wins";
                return 0;
            }
        }

        for (int j = 0; j < 3; j++)
        {
            if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && (board[0][j] == 'X' || board[0][j] == 'O'))
            {
                cout << "Player " << player << " Wins";
                return 0;
            }
        }

        if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && (board[0][0] == 'X' || board[0][0] == 'O'))
        {
            cout << "Player " << board[0][0] << " Wins";
            return 0;
        }

        if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        {
            cout << "Player " << player << " Wins\n";
            return 0;
        }

        player = (player == 'X') ? 'O' : 'X';
    }

    cout << "Game Draw\n";
    return 0;
}