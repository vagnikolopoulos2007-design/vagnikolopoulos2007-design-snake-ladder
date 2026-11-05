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
   int board[101];
   for (int i = 1; i <= 100; i++)
   {
    board[i] = i;
   }
   
  int alt = 0;
  int Lr = 101;
  int Rl = 80;
  int val =100;

 while (val--)
 {
    if (alt == 0)
    {
        Lr--;
        if (Lr == player1)
        {
            printf("#P1    ");
        }else if(Lr == player2)
        {
            printf("#P2    ");
        }else
        {
            printf("$d    ", board[Lr]);
        }
        if (Lr % 10 == 1)
        {
            printf("\n\n");
            alt = 1;
            Lr -= 10;
        }
    }else{
        Rl++;
        if ()
    }
 }
 
}
