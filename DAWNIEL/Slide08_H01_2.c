/*Scrivere un programma C che chieda all’utente di inserire dei valori in un array di 5 elementi.
Ogni valore inserito dall’utente dovrà essere posizionato al fine di avere un array ordinato in modo ascendente.
Supporre, inoltre, che l’array non può contenere due elementi uguali.*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void printArray( int array[], int n );//stampa l’array
int exsist( int array[], int n, int m );//restituisce 0 o 1 a seconda se l’elemento è già presente
void insert( int array[], int n );//gestisce l’inserimento ordinato
int getPosition( int array[], int n, int m );//restituisce la posizione dell’intero più piccolo rispetto al valore inserito
void shift( int array[], int n, int m );//permette di shiftare gli elementi dell’array per fare posto al valore dell’utente

//inizio programma
int main( void ) {
  int a[ SIZE ] = { 0 };
  int b;

  printArray( a, SIZE );

  for ( size_t i = 0; i < SIZE; i++ ) {
    scanf( "%d", &b );
    if ( !exsist(a, SIZE, b) ) {
      shift(a, SIZE, b);
      insert(a, b);
    } else {
      puts("Already used value.")
    }
    printArray(a, SIZE);
  }

  return 0;
}//fine programma

void printArray( int array[], int n ) {
  for ( size_t i = 1; i < n; i++ ) {
    printf( "%d\t", array[ i ] );
  }
  printf( "\n" );
}

void shift( int array[], int n, int m ) {
  for (size_t i = 0; i < getPosition(array, n, m); i++) {
    array[i] = array[i+1];
  }
}

void insert( int array[], int n ) {

}

int getPosition( int array[], int n, int m ) {
  for (size_t i = 0; i < n; i++) {
    if ( n > array[i] ) {
      
    }
  }
}
