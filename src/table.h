typedef struct {
    
} Table;

#ifndef TABLE_H 
#define TABLE_H 

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// #define NUM_SUITS 4
// #define NUM_RANKS 13
// #define DECK_SIZE (NUM_SUITS * NUM_RANKS)

// typedef enum {
//     HEARTS,
//     DIAMONDS,
//     CLUBS,
//     SPADES
// } Suit;

// void initialize_deck(Deck *deck);
// void shuffle_deck(Deck *deck);
// Card draw_card(Deck *deck);
// void print_card(const Card *card);

// Table represets a game. May make sense in the future to break this out into game, table

typedef struct {
    // array of players
    // deck
    // pot
    // order - we may be able to assign this to player. but there needs to be a way to handle changes in the order, 
    //  for example if a player leaves.
    // game - omaha, 6 person, 9 person. bb, smb
    
} Table;

// Where shoud the game logic live

#endif // TABLE_H 