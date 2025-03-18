#ifndef GAME_H
#define GAME_H

typedef struct { 
    int player_count;
    Player players[9]
    float button;
    float big_blind;
    float small_blind;
    float pot;
    float bet;
    // Deck
    // Cards - 6
} Game;

#endif // GAME_H

// Player actions:

// Call
// Check
// Bet
// Fold 

// Dealer actions:

// Init
// Flop
// Turn
// River
// End