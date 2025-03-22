//
// Created by administrator on 2/18/25.
//

#ifndef FINALGAME_H
#define FINALGAME_H
#include "Turn.h"
#include "Die.h"
#include "Player.h"
using namespace std;

class FinalGame {
protected:
    Player player1;
    bool gameOver;
public:
    FinalGame();
    void showRules();
};

#endif //FINALGAME_H