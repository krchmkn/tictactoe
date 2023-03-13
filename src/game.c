#include "game.h"

int main()
{
    char game_map[] = "123456789"; 

    const int winning_combinations_indexes[][SIDE_SIZE] = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8},
        {0, 3, 6},
        {1, 4 ,7},
        {2, 5, 8},
        {0, 4, 8},
        {2, 4, 6}
    };

    const struct Player player1 = {
        .id = 1, .marker = 'X'
    };

    const struct Player player2 = {
        .id = 2, .marker = 'O'
    };

    game_loop(game_map, winning_combinations_indexes, &player1, &player2);

    return 0;
}

