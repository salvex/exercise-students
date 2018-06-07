/*IL SETACCIO DI ERATOSTENE*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000

void inTo1( int s[], int n );
void sieve( int s[], int n );
void printRes( int s[], int n );

int main( void ) {
  int s[ SIZE ];
  inTo1( s, SIZE );
  sieve( s, SIZE );
  printRes( s, SIZE );

  return 0;
}

void inTo1( int s[], int n ) {
  for (size_t i = 1; i < n; i++) {
    s[ i ] = 1;
  }
}

void sieve( int s[], int n ) {
  for (size_t i = 2; i < n; i++) {
    if ( s[i] == 1 ) {
      for (size_t j = (i + 1); j < n; j++) {
        if ( j % i == 0 ) {
          s[j] = 0;
        }
      }
    }

  }
}

void printRes( int s[], int n ) {
  for (size_t i = 0; i < n; i++) {
    if (s[i] == 1) {
      printf("%d is a prime number\n", i );
    }
  }
}
