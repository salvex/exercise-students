/*Scrivere un programma C che, facendo uso delle
funzioni, trovi gli elementi massimo e il minimo
all’interno di un array di lunghezza 10.*/
#include <stdio.h>

#define SIZE 10

void printArray( int a[], int n );
int findMax( int a[], int n );
int findMin( int a[], int n );

//inizio programma
int main( void ) {
  int a[ SIZE ] = { 1, 2, 4, 6, 11, 75, 44, 13, 9, 10 };

  printArray( a, SIZE );
  printf( "The maximum element of the array is %d\nThe minimus element is %d", findMax( a, SIZE ), findMin( a, SIZE ) );
  
  return 0;
}//fine programma

int findMax( int a[], int n ) {
  int max = a[ 0 ];
  for ( int i = 1; i < n; i++ ) {
    if ( a[ i ] > max ) {
      max = a[ i ];
    } else {
      return max;
    }
  }
}

int findMin( int a[], int n ) {
  int min = a[ 0 ];
  for ( int i = 1; i < n; i++ ) {
    if ( a[ i ] < min ) {
      min = a[ i ];
    } else {
      return min;
    }
  }
}

void printArray( int a[], int n ) {
  for ( size_t i = 0; i < n; i++ ) {
    printf( " %d", a[ i ] );
  }
  printf( "\n" );
}
