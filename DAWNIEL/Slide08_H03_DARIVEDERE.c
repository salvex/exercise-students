/*Si dice che una matrice abbia un punto di sella se per qualche posizione della matrice vi è un elemento che è
più piccolo rispetto a quelli sulla riga e più grande rispetto a quelli sulla colonna.
Scrivere una funzione che abbia come parametro una matrice di numeri reali e scriva quali sono i punti di sella e le loro posizioni.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 3

void enterM( int n, int m[][SIZE] );
void printM( int n, int m[][SIZE] );
void sella( int n, int m[][SIZE] );

int main( void ) {
  int m[ SIZE ][ SIZE ];
  enterM( SIZE, m );
  printM( SIZE, m );
  sella( SIZE, m );

  return 0;
}

void enterM( int n, int m[][n] ) {
  for ( size_t i = 0; i < n; i++ ) {
    for ( size_t j = 0; j < n; j++ ) {
      puts( "Enter a value: " );
      scanf( "%d", &m[i][j] );
    }
  }
}

void printM( int n, int m[][SIZE] ) {
  for ( size_t i = 0; i < n; i++ ) {
    for ( size_t j = 0; j < n; j++ ) {
      printf( "%d\t", m[i][j] );
    }
    puts("");
  }
}

void sella( int n, int m[][SIZE] ) {
  int min, max, h, z;
  max = m[0][0];
  for ( size_t i = 0; i < n; i++ ) {
    min = m[i][0];
    for ( size_t j = 0; j < n; j++ ) {
      if (m[i][j] < min) {
        min = m[i][j];
      }
    h = j;
    }
    int x = 0;
    for (size_t k = 0; k < n; k++) {
      if (m[k][h] < min ) {
        z = k;
        x++;
        if (x == (n - 1)) {
          printf("Sella is %d", min);
          break;
        }
      }
    }
  }
}
