#include <stdio.h>
#include "game.h"

// TODO: Current MVP is a game where everything defaults and the button wins after hand is complete.
// The amount of money should be accurate. The button should have .15 more than everyone else.  

// TODO: Enable configuring with options
void init(Game* game) {
    game->big_blind = .10;
    game->small_blind = .05;
    game->button = 0;
    game->last_bet = 0;

    for (int i = 0; i < MAX_PLAYERS; i++) {
        Player player;
        player.active = 1;
        player.chips = 1000;
        sprintf(player.name, "player%d", i);
        // TODO: Review this
        game->players[i] = &player;
     }
     
    initialize_deck(game->deck);
}

void deal(Game* game) {
    shuffle_deck(game->deck);
    for (int i = 0; i < MAX_PLAYERS; i++) {
        Player* player = game->players[i];
        if (player->active) {
            player->cards[0] = draw_card(game->deck); 
            player->cards[1] = draw_card(game->deck);
        }
    } 
}

void print(Game* game) {
    for(int i = 0; i < MAX_PLAYERS; i++) {
        printf("%s %f\n", game->players[i]->name, game->players[i]->chips);
    }
}

