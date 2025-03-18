#include <stdio.h>
#include "game.h"

// TODO: Current MVP is a game where everything defaults and the button wins after hand is complete.
// The amount of money should be accurate. The button should have .15 more than everyone else.

// SHEESH!.. forgot how much memory management you have to do in C..

// TODO: Enable configuring with options
void init(Game *game)
{
    game->big_blind = .10;
    game->small_blind = .05;
    game->button = 0;
    game->last_bet = 0;

    for (int i = 0; i < MAX_PLAYERS; i++)
    {
        game->players[i] = malloc(sizeof(Player));
        game->players[i]->active = 1;
        game->players[i]->chips = 1000;
    }

    game->deck = malloc(sizeof(Deck));
    initialize_deck(game->deck);
}

void deal(Game *game)
{
    shuffle_deck(game->deck);
    for (int i = 0; i < MAX_PLAYERS; i++)
    {
        Player *player = game->players[i];
        if (player->active)
        {
            player->cards[0] = draw_card(game->deck);
            player->cards[1] = draw_card(game->deck);
        }
    }
}

// This is where I could do some cool console graphics
void display(Game *game)
{
    for (int i = 0; i < MAX_PLAYERS; i++)
    {
        printf("%s has %f chips\n", game->players[i]->name, game->players[i]->chips);
    }
}
