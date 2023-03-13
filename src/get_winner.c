#include "game.h"

char get_winner_marker(
        char game_map[], 
        const int winning_combinations_indexes[][SIDE_SIZE],
        const char player1_marker, 
        const char player2_marker)
{

    const int size = sizeof(&winning_combinations_indexes);
    const int combination_size = (sizeof(winning_combinations_indexes[0]) 
            / sizeof(winning_combinations_indexes[0][0]));

    for(int i = 0; i < size; i++) {
        int player1_markers_count, player2_markers_count;
        player1_markers_count = player2_markers_count = 0;

        for(int j = 0; j < combination_size; j++) {
            const int index = winning_combinations_indexes[i][j]; 
            if (game_map[index] == player1_marker) {
                player1_markers_count++;
            } else if (game_map[index] == player2_marker) {
                player2_markers_count++;
            }
        }

        if (player1_markers_count == SIDE_SIZE) {
            return player1_marker;
        }

        if (player2_markers_count == SIDE_SIZE) {
            return player2_marker;
        }
    }

    return '0';
}

