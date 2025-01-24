#include <stdio.h>
#include <stdlib.h>
#include "deck.h"

// TODO: Create Makefile to help with running this puppy

int main(int argc, char *argv[]) {
    // Handle command-line arguments
    if (argc > 1) {
        printf("Arguments received:\n");
        for (int i = 1; i < argc; i++) {
            printf("%s\n", argv[i]);
        }
    } else {
        printf("No arguments provided.\n");
    }
 
    // Initialize the application
    printf("Game started yo!\n");

    Deck d;
    initialize_deck(&d);
    Card c = draw_card(&d);
    print_card(&c);
    
    shuffle_deck(&d);
    c = draw_card(&d);
    print_card(&c);

    /*
        term-hold-em {{game settings}}  
        
        what does a game need?
        * Dealer
        * Players
        * Deck of cards
        * Chips
        * Game state

        A game state needs to hold:
        * Number of player
        * Deck of cards 
        * Buy in 
        * Big blind

        I can start with building a class for a deck of cards
    
        Create a REPL? 
    */

    return 0;
}