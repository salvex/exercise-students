#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void bubble( int array[], const int size, int ( *compare )( int a, int b ) );
int ascending( int a, int b );
int descending( int a, int b );

int main( void ) {
  int a[ SIZE ] = { 0, 5, 7, 33, 1, 2, 12, 4, 90, 22 };
  int order, count;

  puts( "Enter 1 for Ascending, 2 for Descending" );
  scanf( "%d", &order );

  puts( "Data in original order:" );
  for ( count = 0; count < SIZE; count++) {
    printf( "%d ", a[ count ] );
  }
  puts("");

  if ( order == 1 ) {
    bubble( a, SIZE, ascending );
    puts( "Data in ASCENDING order:" );
  } else {
    bubble( a, SIZE, descending );
    puts( "Data in DESCENDING order:" );
  }
  for ( count = 0; count < SIZE; count++) {
    printf( "%d ", a[ count ] );
  }

  return 0;
}

void bubble( int array[], const int size, int ( *compare )( int a, int b ) ) {
int pass, count;

void swap( int *element1Ptr, int *element2Ptr );
for ( pass = 0; pass < size; pass++ ) {
  for ( count = 0; count < size - 1; count++ ) {
    if ( ( *compare )( array[ count ], array[ count + 1 ] ) ) {
      swap( &array[ count ], &array[ count + 1 ] );
      }
    }
  }
}

void swap( int *element1Ptr, int *element2Ptr ) {
  int hold = *element1Ptr;
  *element1Ptr = *element2Ptr;
  *element2Ptr = hold;
}

int ascending( int a, int b ) {
  return a > b;
}

int descending( int a, int b ) {
  return a < b;
}
