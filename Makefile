CC = gcc
CFLAGS = -Wall -Wextra -Iinclude
SRC = src/main.c src/deck.c src/game.c src/player.c
OBJ = $(SRC:.c=.o)
EXEC = term-hold-em

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)

.PHONY: all clean