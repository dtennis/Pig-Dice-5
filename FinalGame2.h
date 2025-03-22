//
// Created by administrator on 3/21/25.
//

#ifndef FINALGAME2_H
#define FINALGAME2_H
#include "FinalGame.h"
#include "Player.h"



class FinalGame2 : public FinalGame{
    bool player1_turn = true;
    Player player1;
    int player1_turnNumber = 1;
    int player2_turnNumber = 1;
    string player1_name, player2_name;

public:
    FinalGame2();
    void upd_rules();
    void set_player_names();

};



#endif //FINALGAME2_H
