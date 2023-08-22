/**************************************************************************************************************************
                                            TASK 3:
Build a simple console-based Tic-Tac-Toe game that allows two players to play against each other.
****************************************************************************************************************************/

#include <iostream>
using namespace std;


//These are global entites.
char table[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}}; // Table For Tic Tac Toe Game Board...
int row, cols;
int choice;
char chance = 'X';
bool draw = false;

//Function prototypes
void turn();
bool gameOver();
void show_table();
void gamePlay();

int main() // Program Execution Starts Here...
{
    cout << "\n\nTIC TAC TOE Game !!\n\n";

    cout << "Player 1st Enter -> 'X'\nPlayer 2nd Enter -> 'O'\n";
    cout << "Please enter a number from 1 to 9, corresponding to the square you want to mark with X or O.\n";
    show_table();
    gamePlay();
    if (chance == 'X' && draw == false)
    {
        cout << "\nPlayer 2nd has won the game!!";
    }
    else if (chance == 'O' && draw == false)
    {
        cout << "\nPlayer 1st has won the game!!";
    }
    else
        cout << "\nGame Draw\n";

    return 0;
}

void show_table() //This function helps to print the table for tic tac toe game.
{
    cout << "\n\t\t     |     |     \n";
    cout << "\t\t  " << table[0][0] << "  | " << table[0][1] << "   |  " << table[0][2] << " \n";
    cout << "\t\t_____|_____|_____\n";
    cout << "\t\t     |     |     \n";
    cout << "\t\t  " << table[1][0] << "  | " << table[1][1] << "   |  " << table[1][2] << " \n";
    cout << "\t\t_____|_____|_____\n";
    cout << "\t\t     |     |     \n";
    cout << "\t\t  " << table[2][0] << "  | " << table[2][1] << "   |  " << table[2][2] << " \n";
    cout << "\t\t     |     |     \n";
}

void turn()   // This function helps to provide turn for players. 
{
    
    if (chance == 'X')
    {
        cout << "\nPlayer 1st chance : ";
    }
    else if (chance == 'O')
    {
        cout << "\nPlayer 2nd chance : ";
    }
    cin >> choice;

    switch (choice)
    {
    case 1:
        row = 0;
        cols = 0;
        break;
    case 2:
        row = 0;
        cols = 1;
        break;
    case 3:
        row = 0;
        cols = 2;
        break;
    case 4:
        row = 1;
        cols = 0;
        break;
    case 5:
        row = 1;
        cols = 1;
        break;
    case 6:
        row = 1;
        cols = 2;
        break;
    case 7:
        row = 2;
        cols = 0;
        break;
    case 8:
        row = 2;
        cols = 1;
        break;
    case 9:
        row = 2;
        cols = 2;
        break;
    default:
        cout << "Invalid, Please Write Valid Move!!";
    }

    if (chance == 'X' && table[row][cols] != 'X' && table[row][cols] != 'O')
    {
        table[row][cols] = 'X';
        chance = 'O';
    }
    else if (chance == 'O' && table[row][cols] != 'X' && table[row][cols] != 'O')
    {
        table[row][cols] = 'O';
        chance = 'X';
    }
    else
    {
        cout << "Box already filled\n";
        turn();
    }
}

bool gameOver() //This function check the game is over or not and whose player won the match.
{
    for (int i = 0; i < 3; i++)
        if (table[i][0] == table[i][1] && table[i][0] == table[i][2] || table[0][i] == table[1][i] && table[0][i] == table[2][i])
            return false;

    if (table[0][0] == table[1][1] && table[0][0] == table[2][2] || table[0][2] == table[1][1] && table[0][2] == table[2][0])
        return false;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (table[i][j] != 'X' && table[i][j] != 'O')
                return true;

    draw = true;
    return false;
}
void gamePlay()
{
    while (gameOver())
    {
        
        turn();
        gameOver();
        show_table();
    }
}