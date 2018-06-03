#include <stdlib.h>
#include <stdio.h>

int TakeBit(int n, int pos);

int main(int argv, char argc*[])
     {
     int num, p;
     printf("Inserisci il tuo numero:");
     scanf("%d",&num);
     printf("Inserisci la posizione del bit:")
     scanf("%d",&p);
     printf("Il bit alla posizione %d e': %d",p,TakeBit(num,p));
     }

int TakeBit(int n, int pos)
     {
     int mask1;
     mask1 = 1 << (pos-1);
     if((n & mask1) == 0)
          {
          printf("0");
          } else {
          printf("1");
          }
     }
