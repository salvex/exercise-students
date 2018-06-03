/*Scrivere un programma C che chieda all’utente di inserire dei valori in un array di 5 elementi.
Ogni valore inserito dall’utente dovrà essere posizionato al fine di avere un array ordinato in modo ascendente.
Supporre, inoltre, che l’array non può contenere due elementi uguali.*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int exsist( int array[], int n, int m );//restituisce 0 o 1 a seconda se l’elemento è già presente
void printArray( int array[], int n );//stampa l’array
void insert( int array[], int n );//gestisce l’inserimento ordinato
int getPosition( int array[], int n, int m );//restituisce la posizione dell’intero più piccolo rispetto al valore inserito
void shift( int array[], int n, int m );//permette di shiftare gli elementi dell’array per fare posto al valore dell’utente

//inizio programma
int main( void ) {
  int a[ SIZE ] = { 0 };

  printArray( a, SIZE );

  printf( "Enter a value\n" );
  insert( a, SIZE );



  return 0;
}//fine programma

void printArray( int array[], int n ) {
  for ( size_t i = 0; i < n; i++ ) {
    printf( "%d\t", array[ i ] );
  }
  printf( "\n" );
}

void insert( int array[], int n ) {
  int h, j;
  for (int i = n - 1; i >= 0; i--) {
    scanf( "%d", &h );
    if ( !exsist( array, n, h ) ) {
      j = getPosition( array, SIZE, h );
      printf("%d\n", j);
      shift( array, j, h );
      array[ i ] = h;
      printArray( array, SIZE );
    } else {
      printf("Value already used! Try again.\n");
    }
  }
}

int exsist( int array[], int n, int m ) {
  for ( size_t i = 0; i < n; i++ ) {
    if ( array[ i ] == m ) {
      return 1;
    }
  }
  return 0;
}

int getPosition( int array[], int n, int m ) {
  for (int i = 0; i < n; i++) {
    if ( array[ i ] < m ) {
      return i - 1;
    } else {
      return i;
    }
  }
}

void shift( int array[], int n, int m ) {
  int h;
  if ( array[ n ] < m ) {
    for (int i = 1; i < n; i++) {
       h = array[ i ];
       array[ i ] = array[ i + 1 ];
       array[ i + 1 ] = h;
    }
  }
}
