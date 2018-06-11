#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//(x2 - x1) + (y2 - y1)

#define SIZE 3

struct distance{
     double x;
     double y;
};

typedef struct distance Point;

void initPoint(Point points[SIZE]);

void printPoint(Point points2[SIZE]);

void getDistance(Point points1[SIZE]);


void initPoint(Point points[SIZE])
     {

     for(size_t i=0; i<SIZE-1; i++)
          {
          printf("\n\nInserisci il valore di X(%u):",i+1);
          scanf("%lf",&points[i].x);

          }

     for(size_t j=0; j<SIZE-1; j++)
          {
          printf("\n\nInserisci il valore di Y(%u):",j+1);
          scanf("%lf",&points[j].y );
          }
     }



void getDistance(Point points1[SIZE])
     {
     double res1,res2;
     res1 = sqrt(pow(points1[0].x - points1[1].x,2));
     res2 = sqrt(pow(points1[0].y - points1[1].y,2));
     points1[2].x = res1;
     points1[2].y = res2;
     }

void printPoint(Point points2[SIZE])
     {
     double result;
     result = points2[2].x + points2[2].y;
     printf("La distanza e': %lf",result);
     }


int main(int argc, char *argv[])
     {
     Point m[SIZE];
     int selection;
     int f_init = 0, d_init = 0;   //VARIABILI DI FLAG PER EVITARE ACCESSI INUTILI
     puts("\n\n*** ESERCIZIO 3 SLIDE 10 STRUTTURE ***\n\n");

          do {
               puts("\n\nInserisci (1) per inizializzare la variabili X e Y\n\n");
               puts("\n\nInserisci (2) per calcolare la distanza fra due punti\n\n");
               puts("\n\nInserisci (3) per stampare la distanza\n\n");
               puts("\n\nInserisci (4) per uscire\n\n");
               scanf("%d",&selection);

               switch(selection) {

                    case 1:
                         if(f_init == 1) {
                              puts("\n\n Hai già inizializzato le variabili!\n\n");
                              break;
                         }else{
                         initPoint(m);
                         f_init = 1;
                         }
                         break;
                    case 2:
                         if(f_init == 0) {
                              puts("\n\nDevi inizializzare le variabili!\n\n");
                              break;
                         }else{
                         getDistance(m);
                         d_init = 1;
                         }
                         break;
                    case 3:
                         if(f_init == 1 && d_init == 1) {
                         printPoint(m);
                         } else{
                         puts("\n\nOperazione non consentita!\n\n");
                         }
                         break;
                    case 4:
                         puts("\n\nArrivederci!\n\n");
                         break;

                    default: break;



               }


          }while(selection != 4);

     return 0;

     }
