#include <stdio.h>
#include "game.h"

// TODO: Enable configuring with options
void init() {
    for (int i = 0; i < MAX_PLAYERS; i++) {
        Player player;
        player.active = 1;
        player.chips = 1000;
        sprintf(player.name, "player%d", i);
    }
}

