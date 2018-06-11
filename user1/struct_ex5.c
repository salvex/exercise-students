#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define SIZE 2


struct play{
     int rock;
     int paper;
     int scissor;
};

typedef struct play Player;



void initMosse(Player *games);

void mossaUmano(Player *games1, int move1);

void mossaComputer(Player *games2, int move2);

void whoIsWinner(Player *games3);


void initMosse(Player *games)
     {
     for(size_t i=0; i<SIZE; i++)
          {
          (games+i)->rock = 0;
          (games+i)->paper = 0;
          (games+i)->scissor = 0;
          }
     }

void mossaUmano(Player *games1, int move1 )
     {
          if(move1 == 1) {
          (games1+0)->rock = 1;
          puts("\nIl giocatore ha scelto sasso!\n");
          } else if(move1 == 2) {
          (games1+0)->paper = 1;
          puts("\nIl giocatore ha scelto carta!\n");
          } else if(move1 == 3) {
          (games1+0)->scissor = 1;
          puts("\nIl giocatore ha scelto forbice!\n");
          }
     }

void mossaComputer(Player *games2, int move2)
     {
          if(move2 == 1 || move2 == 0) {
          (games2+1)->rock = 1;
          puts("\nIl computer ha scelto sasso!\n");
          } else if(move2 == 2) {
          (games2+1)->paper = 1;
          puts("\nIl computer ha scelto carta!\n");
          } else if(move2 == 3) {
          (games2+1)->scissor = 1;
          puts("\nIl computer ha scelto forbice!\n");
          }
     }

void whoIsWinner(Player *games3)
     {
          if((games3+0)->rock == 1) {
               if((games3+1)->rock == 1) {
               puts("\nPareggio!\n");
               }else if((games3+1)->paper == 1) {
               puts("\nIl computer ha vinto!\n");
               } else if((games3+1)->scissor == 1) {
               puts("\nIl giocatore ha vinto!\n");
               }
          }

          if((games3+0)->paper == 1) {
               if((games3+1)->rock == 1) {
               puts("\nIl giocatore ha vinto!\n");
               }else if((games3+1)->paper == 1) {
               puts("\nPareggio!\n");
               } else if((games3+1)->scissor == 1) {
               puts("\nIl computer ha vinto!\n");
               }
          }

          if((games3+0)->scissor == 1) {
               if((games3+1)->rock == 1) {
               puts("\nIl computer ha vinto!\n");
               }else if((games3+1)->paper == 1) {
               puts("\nIl giocatore ha vinto!\n");
               } else if((games3+1)->scissor == 1) {
               puts("\nPareggio!\n");
               }
          }

     }

int main(int argc, char *argv[])
     {
     srand(time(NULL));

     Player game[SIZE];

     int move = 0;
     int movePC =  (rand()%3) + 1;

     initMosse(game);

     puts("\n\nESERCIZIO SLIDE 10 CARTA-FORBICE-SASSO STRUTTURE\n\n");
     puts("\n\nGiocatore: (1) per sasso, (2) per carta, (3) per forbice\n\n");
     scanf("%d",&move);
     mossaUmano(game,move);
     puts("\n\nTurno computer\n\n");
     mossaComputer(game,movePC);
     puts("\n\n***RISULTATO***\n\n");
     whoIsWinner(game);

     return 0;
     }
