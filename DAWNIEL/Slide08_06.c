/*Scrivere una funzione C che, data una matrice in
ingresso, restituisca la somma degli elementi sulla
diagonale principale.*/
#include <stdio.h>
#include <stdlib.h>

void readMatrix( int a, int c[][ a ] );
void sumDiagonal( int a, int c[][ a ] );
void printMatrix( int a, int c[][ a ] );

int main( void ) {
  int x;
  printf( "Enter number of row and column:\n" );
  scanf( "%d", &x );

  int y[ x ][ x ];
  readMatrix( x, y );
  printMatrix( x, y );
  sumDiagonal( x, y );

  return 0;
}

void readMatrix( int a, int c[][ a ] ) {
  for ( size_t i = 0; i < a; i++ ) {
    for ( size_t j = 0; j < a; j++ ) {
      scanf( "%d\n", &c[ i ][ j ] );
    }
  }
}

void sumDiagonal( int a, int c[][ a ] ) {
  for (size_t i = 0; i < a; i++) {
    for (size_t j = 0; j < a; j++) {
      if (/* condition */) {
        /* code */
      } else {
        /* code */
      }
    }
  }
}
