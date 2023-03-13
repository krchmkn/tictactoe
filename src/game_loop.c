#include "game.h"

void game_loop(char game_map[], 
        const int winning_combinations_indexes[][SIDE_SIZE], 
        const struct Player *player1, 
        const struct Player *player2)
{

    const int game_map_length = SIZE_OF_ARR(game_map);
    const struct Player *current_player = player1;
    
    int steps_left = atoi(&game_map[game_map_length]);
    char input_num, input_ch;
    do {
        printf(CLEAR_SCREEN_CODE);
        printf(YELLOW_SCREEN_CODE);
        
        printf("\n\tTic Tac Toe\n\n"); 
        printf("\tPlayer 1 - %c\n", player1->marker);
        printf("\tPlayer 2 - %c\n\n", player2->marker);
        
        draw(game_map); 

        char winner_marker;
        if (steps_left <= game_map_length - SIDE_SIZE) {
            winner_marker = get_winner_marker(game_map, 
                winning_combinations_indexes, 
                player1->marker, 
                player2->marker);
        }

        if (winner_marker == player1->marker) {
            printf("\n\n\tThe winner is player %d.\n\tCongratulations!\n\n", 
                    player1->id);
            return;
        } else if (winner_marker == player2->marker) {
            printf("\n\n\tThe winner is player %d.\n\tCongratulations!\n\n", 
                    player2->id);
            return;
        }

        if (steps_left > 0) {
            printf(YELLOW_SCREEN_CODE);
            printf("\n\n\tEnter %c to exit.", EXIT_KEY);
            printf("\n\tPlayer %d enter a number: ", current_player->id);  
        } else {
            printf("\n\n\tGame over. Dead heat.\n\n");
            return;
        }
 
        input_num = atoi(&input_ch);
        if (input_num > 0
                && input_num - 1 <= game_map_length
                && game_map[input_num - 1] != player1->marker
                && game_map[input_num - 1] != player2->marker) {

            game_map[input_num - 1] = current_player->marker;
            current_player = 
                current_player->id == 1
                    ? player2
                    : player1;

            steps_left--;
        }       
    } while((input_ch = getchar()) != EOF && input_ch != EXIT_KEY);
}

