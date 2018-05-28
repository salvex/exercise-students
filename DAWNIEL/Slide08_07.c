/*Scrivere un programma C che calcoli la media delle
colonne di una matrice di dimensione definita dal
programmatore.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COL 5
#define ROW 5

int genRandomNumber();
void fillMatrix( unsigned int col, unsigned int row, int matrix[][ col ] );
void printMatrix( unsigned int col, unsigned int row, int matrix[][ col ] );
void meanMatrix( unsigned int row, unsigned int col, int matrix[][ col ], double array[] );
void printArray( unsigned int col, double array[] );


int main( void ) {

  int a[ ROW ][ COL ];
  double b[ ROW ];

  srand( time( NULL ) );

  fillMatrix( COL, ROW, a );
  printMatrix( COL, ROW, a );
  meanMatrix( COL, ROW, a, b );
  puts("Mean of columns is: ");
  printArray( COL, b );


  return 0;
}

void fillMatrix( unsigned int col, unsigned int row, int matrix[][col] ) {
  for ( size_t i = 0; i < row; i++ ) {
    for ( size_t j = 0; j < col; j++ ) {
      matrix[ i ][ j ] = rand() % 100 + 1;
    }
  }
}

void meanMatrix( unsigned int col, unsigned int row, int matrix[][col], double array[] ) {
  int sum = 0;
  for ( size_t i = 0; i < col; i++ ) {
    for ( size_t j = 0; j < row; j++ ) {
      sum += matrix[ i ][ j ];
    }
    array[i] = sum / col;
  }

}

void printMatrix( unsigned int col, unsigned int row, int matrix[][ col ] ) {
  for (size_t i = 0; i < row; i++) {
    for (size_t j = 0; j < col; j++) {
      printf("%d\t", matrix[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

void printArray( unsigned int col, double array[] ) {
  for ( size_t i = 0; i < col; i++ ) {
    printf( "%.2f\t", array[ i ]) ;
  }
}
