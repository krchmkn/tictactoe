#ifndef GAME_H_
#define GAME_H_

#include <stdio.h>
#include <stdlib.h>

#define SIDE_SIZE 3
#define EXIT_KEY 'q'
#define CLEAR_SCREEN_CODE "\e[1;1H\e[2J"
#define YELLOW_SCREEN_CODE "\033[0;33m"
#define GREEN_SCREEN_CODE "\033[0;32m"
#define WHITE_SCREEN_CODE "\033[0;37m"
#define SIZE_OF_ARR(arr) (sizeof(&arr) / sizeof(arr[0]))

struct Player {
    int id;
    char marker;
};

void draw(char[], const char, const char);

void game_loop(
        char[], 
        const int combinations[][SIDE_SIZE], 
        const struct Player *player1, 
        const struct Player *player2);

char get_winner_marker(char[], 
        const int combinations[][SIDE_SIZE], 
        const char, 
        const char);

#endif

