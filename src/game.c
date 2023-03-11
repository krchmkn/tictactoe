#include "game.h"

int main()
{
    char game_map[] = {
        '1', '2', '3',
        '4', '5', '6',
        '7', '8', '9'
    };

    struct Player player1 = {
        .id = 1, .marker = 'X'
    };

    struct Player player2 = {
        .id = 2, .marker = 'O'
    };

    game_loop(game_map, &player1, &player2);

    return 0;
}

