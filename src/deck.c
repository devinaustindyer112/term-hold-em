#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "deck.h"

void initialize_deck(Deck *deck) {
    int index = 0;
    for (int suit = 0; suit < NUM_SUITS; suit++) {
        for (int rank = 0; rank < NUM_RANKS; rank++) {
            deck->cards[index].suit = suit;
            deck->cards[index].rank = rank;
            index++;
        }
    }
    deck->top = 0;
}

void shuffle_deck(Deck *deck) {
    srand(time(NULL));
    for (int i = DECK_SIZE - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        Card temp = deck->cards[i];
        deck->cards[i] = deck->cards[j];
        deck->cards[j] = temp;
    }
    deck->top = 0;
}

Card draw_card(Deck *deck) {
    if (deck->top < DECK_SIZE) {
        return deck->cards[deck->top++];
    } else {
        Card empty_card = { .suit = -1, .rank = -1 };
        return empty_card; // Indicates no more cards
    }
}

void print_card(const Card *card) {
    const char *suits[] = { "Hearts", "Diamonds", "Clubs", "Spades" };
    const char *ranks[] = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace" };
    printf("%s of %s\n", ranks[card->rank], suits[card->suit]);
}