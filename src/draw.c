#include "game.h"

void draw(char arr[])
{   
    const int arr_len = SIZE_OF_ARR(arr); 
    
    for(int i = 0; i <= arr_len; i++) {
        if (i > 0 && i % SIDE_SIZE == 0)
            printf("\n\n\n");
        
        printf(GREEN_SCREEN_CODE);
        printf("\t%c", arr[i]);
    }
}

