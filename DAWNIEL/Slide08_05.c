/*Scrivere una funzione C che, date due matrici in
ingresso, restituisca la matrice somma in output.
Scrivere, inoltre, la funzione per stampare la matrice.*/
#include <stdio.h>
#include <stdlib.h>

void readArray( int x, int y, int a[][ y ] );
void sumArray( int x, int y, int a[][ y ], int b[][ y ], int c[][ y ] );
void printArray( int x, int y, int a[][ y ] );

int main( void ) {
  unsigned int n, c;

  printf( "Enter matrixs' rows, and columns\n" );
  scanf( "%d%d", &n, &c );


  int mat1[ n ][ c ];
  int mat2[ n ][ c ];
  int sum[ n ][ c ];

  printf( "Enter fisrt matrix's integers:\n" );
  readArray( n, c, mat1 );
  printf( "Enter second matrix's integers:\n" );
  readArray( n, c, mat2 );
  sumArray( n, c, mat1, mat2, sum );

  puts("First matrix is: ");
  printArray( n, c, mat1 );
  puts("Second matrix is: ");
  printArray( n, c, mat2 );
  puts("Their sum is: ");
  printArray( n, c, sum );

  return 0;
}

void readArray( int x, int y, int a[][ y ] ) {
  for ( size_t i = 0; i < x; i++ ) {
    for ( size_t j = 0; j < y; j++ ) {
      scanf( "%d", &a[ i ][ j ] );
    }
  }
}

void sumArray( int x, int y, int a[][ y ], int b[][ y ], int c[][ y ] ) {
  for ( size_t i = 0; i < x; i++ ) {
    for ( size_t j = 0; j < y; j++ ) {
      c[ i ][ j ] = a[ i ][ j ] + b[ i ][ j ];
    }
  }
}

void printArray( int x, int y, int a[][ y ] ) {
  for ( size_t i = 0; i < x; i++ ) {
    for ( size_t j = 0; j < y; j++ ) {
      printf( "%d\t", a[ i ][ j ] );
    }
    printf( "\n" );
  }
  printf( "\n" );
}
