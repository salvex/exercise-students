#include <stdlib.h>
#include <stdio.h>



int mossa(int n, int pila_a, int pila_b, int pila_c); //Funzione prototipo per il movimento



int main(int argc, int *argv[])
     {
     int num;
     int int1,int2,int3;
     printf("Inserisci il numero di dischi presenti nel gioco di Hanoi: ");
     scanf("%d",&num);
     mossa(num, 1, 2, 3);

     }

int mossa(int n, int pila_a, int pila_b, int pila_c)  //pila_a PRIMO DISCO principale //pila_b disco ausiliario //pila_c disco destinazione
     {
          if (n==1) //Sfruttando la nozione di funzione ricorsiva, richiamiamo la funzione invertendo le posizioni delle pile e decrementando n
          {
          printf("Il disco e' stato mosso dal piolo %d al piolo %d\n",pila_a,pila_c);
          } else {
          mossa(n-1,pila_a,pila_c,pila_b);
          printf("Il disco e' stato mosso dal piolo %d al piolo %d\n",pila_a,pila_c);
          mossa(n-1,pila_b,pila_a,pila_c);
          }
     }
