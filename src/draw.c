#include "game.h"

void draw(char arr[])
{   
    const int arr_len = sizeof(&arr) / sizeof(arr[0]); 
    
    for(int i = 0; i <= arr_len; i++) {
        if (i > 0 && i % SIDE_SIZE == 0)
            printf("\n\n\n");
        
        printf("\033[1;32m"); // Green color
        printf("\t%c", arr[i]);
    }
}

