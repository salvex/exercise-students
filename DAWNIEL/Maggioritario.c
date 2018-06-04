#include <stdio.h>
#include <stdlib.h>

void majority( int a[], int n );
void takeArray( int a[], int n );

int main( void ) {
  int j;
  printf("Quanto deve essere lungo l'array?\n" );
  scanf("%d", &j);
  int a[ j ];
  takeArray( a, j );
  majority( a , j );
  return 0;
}

void majority( int a[], int n ) {
  float t = 0;
  for (size_t i = 0; i < n; i++) {
    for (size_t j = 0; j < n; j++) {
      if ( a[ i ] == a[ j ]) {
        t++;
      }
    }
    if ( t < ( n / 2 ) ) {
      t = 0;
    } else {
      printf("Questo e' un array maggioritario.\n" );
      break;
    }
  }
  if ( t < ( n / 2 ) ) {
    printf("Questo non e' un array maggioritario.\n");
  }
}

void takeArray( int a[], int n ) {
  for (size_t i = 0; i < n; i++) {
    printf("Inserisci il valore a[%d]\n", i );
    scanf("%d", &a[i] );
  }
}
