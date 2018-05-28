/*Scrivere un programma C che:
1. chieda all’utente di inserire 10 numeri interi;
2. memorizzi questi valori in un array;
3. stampi l’array in ordine inverso;
I punti 2 e 3 dovranno essere implementati tramite l’uso delle funzioni.*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
//definizione prototipi funzioni
void readArray( int a[], int n );
void printArray( int a[], int n );

//inizio programma
int main( void ) {
  int a[ SIZE ];

  for ( size_t i = 0; i < SIZE; i++ ) {

    printf("Enter an integer: \n" );

    readArray( a, i );

  }

  printArray( a, SIZE );

  return 0;
}//fine programma


void readArray( int a[], int n ) {
  scanf( "%d", &a[ n ] );
}

void printArray( int a[], int n ) {

  for ( int i = n - 1; i >= 0; i-- ) {
    printf( " %d", a[ i ] );
  }

}
