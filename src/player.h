#ifndef PLAYER_H 
#define PLAYER_H

#include "deck.h"

typedef struct {
    char name[100];
    float chips;
    Card cards[2];
} Player;

#endif // PLAYER_H 