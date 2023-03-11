#include "game.h"

void game_loop(char game_map[], struct Player *player1, struct Player *player2)
{

    const int game_map_length = sizeof(&game_map) / sizeof(game_map[0]);
    struct Player *current_player = player1;
    
    int steps_left = game_map[game_map_length] - ASCII_48;;
    char input_num, input_ch;
    do {
        printf("\e[1;1H\e[2J"); // Clear screen
        printf("\033[0;33m"); // Yellow color
        
        printf("\n\tTic Tac Toe\n\n"); 
        draw(game_map); 

        // TODO Win situation
        if (steps_left > 0) {
            printf("\033[0;33m"); // Yellow color
            printf("\n\n\tEnter %c to exit.", EXIT_KEY);
            printf("\n\tPlayer %d enter a number: ", current_player->id);  
        } else {
            printf("\033[0;33m"); // Yellow color
            printf("\n\n\tGame over. Dead heat.\n\n");
            return;
        }
 
        input_num = input_ch - ASCII_48; // Convert from ASCII
        
        if (input_num > 0
                && input_num - 1 <= game_map_length
                && game_map[input_num - 1] != player1->marker
                && game_map[input_num - 1] != player2->marker
        ) {
            game_map[input_num - 1] = current_player->marker;

            current_player = 
                current_player->id == 1
                    ? player2
                    : player1;

            steps_left--;
        }
    } while((input_ch = getchar()) != EOF && input_ch != EXIT_KEY);
}

