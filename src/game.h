#ifndef GAME_H
#define GAME_H

#include <stdbool.h>
#include "deck.h"

// TODO:  Same of these values may need to be dynamic if possible. For example if
// we want to increase the cards. Card rankings may also be different. 

#define MAX_PLAYERS 9

typedef struct {
    char* name;
    float chips;
    Card cards[2];
    bool active;
} Player;

typedef struct { 
    int player_count;
    Player players[MAX_PLAYERS];
    float button;
    float big_blind;
    float small_blind;
    float pot;
    float bet;
    Deck deck;
    Card cards[6];
} Game;

// Player actions

void call();
void check();
void bet(float amount);
void fold(Player player);

// Dealer actions

void init();
void deal();
void flop();
void turn();
void end();

#endif // GAME_H