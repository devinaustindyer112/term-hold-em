#ifndef GAME_H
#define GAME_H

typedef struct { 
    // TODO: Add the ability for different game modes. 
    int player_count;
    Player players[9]
    float big_blind;
    float small_blind;
    float pot;
} Game;

#endif // GAME_H