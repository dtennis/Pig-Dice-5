//
// Created by administrator on 3/21/25.
//

#include "FinalGame2.h"
#include <iostream>
using namespace std;

void FinalGame2::upd_rules() {
    cout << "Let's Play PIG Dice!" << endl;
    cout << "* See which player will get to 20 points in the least number of turns." << endl;
    cout << "* Turn ends when you hold or roll a 1." << endl;
    cout << "* If you roll a 1, you lose all points for the turn." << endl;
    cout << "* If you hold, you save all points for the turn" << endl;
    cout << endl;
}

void FinalGame2::set_player_names () {
    string player1, player2;
    cout << "Enter the name of Player 1: ";
    getline(cin, player1);
    player1_name = player1;
    cout << "Enter the name of Player 2: ";
    getline(cin, player2);
    player2_name = player2;
}

FinalGame2::FinalGame2() {
    int temp1 = 0, temp2 = 0;

    upd_rules();
    set_player_names();
    while (gameOver = false) {
        Turn turn;
        if (player1_turn == true) {
            cout << "Turn " << player1_turnNumber <<endl << player1_name << " Score: " << temp1 << endl;
            turn.R_or_H(temp1);
            player2_turnNumber ++;
            if (temp1 >= 50) {
                gameOver = true;
                cout << "Wow " << player1_name << ", You Win With A Score Of " << temp1 << " In " << player1_turnNumber << " Turns" << endl;

            }
        }
        else if (player1_turn == false) {
            cout << "Turn " << player2_turnNumber <<endl << player2_name << " Score: " << temp2 << endl;
            turn.R_or_H(temp1);
            player2_turnNumber ++;
            if (temp2 >= 50) {
                gameOver = true;
                cout << "Wow " << player2_name << ", You Win With A Score Of " << temp2 << " In " << player2_turnNumber << " Turns" << endl;

            }
        }
        player1_turn = false;
    }
}
