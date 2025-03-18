#ifndef GAME_H
#define GAME_H

typedef struct { 
    // TODO: Add the ability for different game modes. 
    int player_count;
    Player players[10]
    float big_blind;
    float small_blind;
    float buy_in;
    float pot;
} Game;

// Define the functions we will need first

#endif // GAME_H