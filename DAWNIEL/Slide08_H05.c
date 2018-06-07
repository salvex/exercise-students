/*RICERCA BINARIA RECURSIVE*/
#include <stdio.h>
#include <stdlib.h>
#define N 15

int binary_search( int key, int array[], int low, int high );
void printHeadr( int array[] );

int main( void ) {
  int bV[ N ] = { 0 };
  int key, result;
  for ( size_t i = 0; i < N; i++ ) {
    bV[ i ] = i * 2;
  }

  printf( "Inserire un valore da 0 a 28: " );
  scanf( "%d", &key );
  puts("");
  printHeadr( bV );
  if ( key >= 0 && key <= 28 ) {
    result = binary_search( key, bV, 0, N - 1 );
    if ( result != -1 ) {
      printf("\n\n%d trovato nell' elemento %d\n", key, result );
    } else {
      printf("\n\nValore NON trovato\n" );
    }
  } else {
    puts("vALORE NON CONSENTITO");
  }





  return 0;
}


int binary_search( int key, int array[], int low, int high ) {

  void printRow( const int array[], int low, int mid, int high );

  int middle;

  middle = ( low + high ) / 2;

  printRow( array, low, middle, high );

  if ( low > high ) {
    return -1;
  }
  if ( key == array[ middle ] ) {
    return middle;
  }
  if ( array[middle] < key ) {
    binary_search( key, array, middle + 1, high );
  } else {
    binary_search( key, array, low, middle - 1 );
  }


}

void printRow( const int array[], int low, int mid, int high ) {
  for (size_t i = 0; i < N; i++) {
    if ( i < low || i > high ) {
      printf("%4s ", " ");
    } else if ( i == mid ) {
      printf("%4d*", array[i]);
    } else {
      printf("%4d ", array[i]);
    }
  }
  printf("\n");
}

void printHeadr( int array[] ) {
  for (size_t i = 0; i < N; i++) {
    printf( "%4d ", i );
  }
  puts("");
  for (size_t j = 1; j < 4 * N; j++) {
    printf( "%2s", "-" );
  }
  printf("\n\n");
}
