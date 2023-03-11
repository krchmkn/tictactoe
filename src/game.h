#ifndef GAME_H_
#define GAME_H_

#include <stdio.h>

#define SIDE_SIZE 3
#define EXIT_KEY 'q'
#define ASCII_48 '0'

struct Player {
    const int id;
    const char marker;
};

void draw(char[]);
void game_loop(char[], struct Player *player1, struct Player *player2);

#endif

