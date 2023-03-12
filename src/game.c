#include "game.h"

int main()
{
    char game_map[] = "123456789"; 

    struct Player player1 = {
        .id = 1, .marker = 'X'
    };

    struct Player player2 = {
        .id = 2, .marker = 'O'
    };

    game_loop(game_map, &player1, &player2);

    return 0;
}

