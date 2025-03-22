//
// Created by administrator on 2/17/25.
//

#include "Turn.h"
using namespace std;

void Turn::addTurn() {
    turnNum++;
}

void Turn::hold(int &gameScore) {
    gameScore = gameScore + getTurnScore();
    cout << "Score for Turn: " << score_turn << endl;
    cout << "Game score: "<< gameScore<< endl;
    score_turn = 0;
    addTurn();
    cout << endl;
    if (gameScore >= 20) {
        cout << "You finished with a final score of 20 or more in " << turnNum -1 << " turns!";
    }
    else {
        cout << "Turn number: " << turnNum << endl;
    }
}

void Turn::roll(int ts) {
    if(ts == 1) {
        score_turn =0;
        cout << "Turn over. No Score." << endl;
        cout << endl;
        addTurn();
        cout << "Turn number: " << turnNum << endl;
    }
    else {
        score_turn = ts + score_turn;
    }
}

int Turn::getTurnScore() {
    return score_turn;
}

void Turn::R_or_H(int &gameScore) {
    char choice = 'a';
    cout << "roll or hold? (r/h): ";
    cin >> choice;
    if (choice == 'r') {
        roll(die.roll());
    }
    else if (choice == 'h') {
        hold(gameScore);
    }
    else {
        cout << "Invalid choice! Try again." << endl;
    }
}

int Turn::getGameScore() {
    return gameScore;
}
