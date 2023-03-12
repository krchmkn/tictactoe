#ifndef GAME_H_
#define GAME_H_

#include <stdio.h>

#define SIDE_SIZE 3
#define EXIT_KEY 'q'
#define ASCII_48 '0'
#define CLEAR_SCREEN_CODE "\e[1;1H\e[2J"
#define YELLOW_SCREEN_CODE "\033[0;33m"
#define GREEN_SCREEN_CODE "\033[1;32m"

struct Player {
    const int id;
    const char marker;
};

void draw(char[]);
void game_loop(char[], struct Player *player1, struct Player *player2);
char get_winner(char[], char, char);

#endif

