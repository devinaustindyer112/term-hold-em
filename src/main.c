#include <stdio.h>
#include <stdlib.h>
#include "game.h"

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

    Game game;
    init(&game);
    print(&game);

    return 0;
}