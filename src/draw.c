#include "game.h"

void draw(const char arr[], const char marker1, const char marker2)
{  
    const int arr_len = SIZE_OF_ARR(arr); 
    
    for(int i = 0; i <= arr_len; i++) {
        if (i > 0 && i % SIDE_SIZE == 0)
            printf("\n\n\n");

        if (arr[i] == marker1) {
            printf(GREEN_SCREEN_CODE);
        } else if (arr[i] == marker2) {
            printf(YELLOW_SCREEN_CODE);
        } else {
            printf(WHITE_SCREEN_CODE);
        }
             
        printf("\t%c", arr[i]);
    }
}

