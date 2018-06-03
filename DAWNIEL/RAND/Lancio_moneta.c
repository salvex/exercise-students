/*Simulare il lancio di una moneta, che tramite la funzione flip restituisce un valroe pseudo-randomico.
immagina di lanciare la moneta 100 volte ed al termine mostrare un grafico nel quale viene mostrata la
frequenza sia della testa che della croce.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

int flip( int a );

//inizio programma
int main( void ) {
  int t = 0, c = 0;
  int b = 2;

  srand( time( NULL ) );

  for (size_t i = 0; i < SIZE; i++) {
    if ( flip( b ) == 0 ) {
      t++;
    } else {
      c++;
    }
  }

  printf( "Testa\t%d\t", t );
  for (size_t j = 0; j < t; j++) {
    printf( "%s", "*" );
    if ( j == 30 ) {
      printf( "\n     \t  \t" );
    }
  }
  printf( "\n\n------------------------------------------------------------------------------------\n\n" );
  printf( "Croce\t%d\t", c );
  for (size_t k = 0; k < c; k++) {
    printf( "%s", "*" );
    if ( k == 30 ) {
      printf( "\n     \t  \t" );
    }
  }

  return 0;
}//fine programma

int flip( int a ) {
  return rand() % a - 1;
}
