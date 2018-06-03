/*Definire e implementare una funzione takeBit() che permetta di estrarre da
un intero il bit meno significativo di posizione i-esima (con 1<i<32).*/
#include <stdio.h>
#include <stdlib.h>
#define N 32

void takeBit( long int a, long int b );

int main( void ) {
  long int n = 1;
  long int shift = 1 << ( N - 1 );
  printf( "%d\n%d\n\n", n, shift );
  takeBit( n, shift );

  return 0;
}

void takeBit( long int a, long int b ) {
  for (size_t i = 0; i < N ; i++) {
    if ( (a & b) == 0 ) {
      printf( "0" );
    } else {
      printf( "1" );
    }
    a = a << 1;
  }
}
