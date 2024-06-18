//Game name: Subtract a square
//Game description:To win in this game you need to be the last player to take a square number of coins
//Author: Hager Ahmed Mohamed Tantawy
//version:2.1
//Date: 2\3\2024

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
     cout << "Welcome to subtract square game\n";

    // Prompt the user to enter the number of coins
    int n_coins;
    cout << "Enter the number of all coins:";
    cin >> n_coins;

    // Display initial game information
      cout << "the number of all coins is:" << n_coins << endl;

    // Initialize current player
    int current_player = 1;

    // Main game loop
    while (n_coins > 0)
     {
        // Prompt the current player to take a square number of coins
        int move;
        cout << "Please take a square number of coins: ";
        cin >> move;

        // Check if the move is valid
        if (move <= 0 || sqrt(move) != floor(sqrt(move)) || move > n_coins)
        {
            cout << "Illegal move, please choose a valid square number of coins." << endl;
            continue;
        }

        // Update the number of coins and display the current state
        n_coins -= move;
        cout << "Now we have " << n_coins << " coins." << endl;

        // Switch to the other player
        current_player = 3 - current_player;

        // Check if the game is over
        if (n_coins <= 0)
         {
            cout << "Player " << current_player << " is the winner." << endl;
            break;
        }
    }

    return 0;
}
