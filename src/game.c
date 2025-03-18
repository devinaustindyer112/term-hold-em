#include "game.h"

// TODO: Enable configuring with options
void init() {
    for (int i = 0; i < MAX_PLAYERS; i++) {
        Player player;
        player.active = 1;
        player.chips = 1000;
        // TODO: Figure out how to convert int to string. 
        player.name = i;
    }
}