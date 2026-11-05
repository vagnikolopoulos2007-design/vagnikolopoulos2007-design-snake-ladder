#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//snake and ladder usually uses a six faced die so we will make a function with rand to initialize and control this die

int cast_die()
{
    return rand() % 6 + 1;
}
//initializing each players starting positions
int player1, player2 = 0;

//we also need a function to get the board as output 

void Board_printing()
{
    
}