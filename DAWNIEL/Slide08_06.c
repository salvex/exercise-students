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
  puts("Enter matrix's variables: ");
  readMatrix( x, y );
  puts("your matrix is: ");
  printMatrix( x, y );
  sumDiagonal( x, y );

  return 0;
}

void readMatrix( int a, int c[][ a ] ) {
  for ( size_t i = 0; i < a; i++ ) {
    for ( size_t j = 0; j < a; j++ ) {
      scanf( "%d", &c[ i ][ j ] );
    }
  }
}

void printMatrix( int a, int c[][ a ] ) {
  for ( size_t i = 0; i < a; i++ ) {
    for ( size_t j = 0; j < a; j++ ) {
      printf( "%d\t", c[ i ][ j ] );
    }
    printf( "\n" );
  }
  printf( "\n" );
}

void sumDiagonal( int a, int c[][ a ] ) {
  int sum = 0;
  for ( size_t i = 0; i < a; i++ ) {
    for ( size_t j = 0; j < a; j++ ) {
      if ( i == j ) {
        sum += c[ i ][ j ];
      }
    }
  }
  printf( "The sum of the digonal's elements is %d", sum );
}
