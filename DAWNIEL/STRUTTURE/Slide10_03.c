/*Creare una struttura dati che descriva un punto in uno spazio 2D. Essa dovrebbe avere i membri che contengano il
valore delle coordinate (x,y). Scrivere un programma che definisca due punti e che ne calcoli la distanza euclidea.*/
#include <stdio.h>
#include <math.h>
#define SIZE 2

//definisco la struttura base
struct point{
  float x;
  float y;
} p[SIZE];//dichiaro qui la struttura che userò nel main.
          //n.b. usco un array di struct per semplificare il tutto

typedef struct point P;//cambio la definizione di struttura in P

//definisco le funzioni
void initPoint( P a[], int c );
void printPoint( P a[], int c );
double getDistance( P a[], int c );

//inizio programma
int main( void ) {
  //dichiaro un contatore i per lo switch e una variabile z per il do-while
  int i = 0, z;
  //inizializzo a zero le coordinate
  for (size_t j = 0; j < SIZE; j++) {
    p[j].x = 0;
    p[j].y = 0;
  }

  //uso un do-while per inserire quante volte voglio e' necessario i valori
  do {
    printf("Inserisci 1 per inserire le coordinate di un punto, 2 per uscire: " );
    scanf("%d", &z);

    //uso lo whitch per far si che se metto 1 inserisco le coordinate e si incrementa i --- dopo il secondo inserimento i = 2 quindi esce dallo switch automaticamente.
    //se metto 2 inizializza i = 2 ed esce dallo switch.
    //e se metto un altro qualsiasi valore mi da errore e mi fa reinserire ( questo all'infinito );.
    switch ( z ) {
      case 1:
        initPoint( p, SIZE );
        i++;
        break;
      case 2:
        i = 2;
        break;
      default:
        printf("\nValore non consentito.\n");
        break;
    }

  } while( i != 2 );
  puts("");//vado accapo

  //stampo i punti inseriti
  printPoint( p, SIZE );
  //stampo la loro distanza
  printf("\nLa loro distanza e': %lf\n", getDistance( p, SIZE ) );

  return 0;
}//fine programma


void initPoint( P a[], int c ) {
  int pos = -1;
  for ( size_t i = 0; i < c; i++ ) {
    if ( a[i].x == 0 && a[i].y == 0 ) {
      pos = i;
      break;
    }
  }
  if ( pos == -1 ) {
    printf("\nImpossibile aggiungere altri valori!\n");
  } else {
    printf( "\nInserisci le coordinate del primo punto: \n" );
    scanf( "%f%f", &a[ pos ].x, &a[ pos ].y );
  }
}

void printPoint( P a[], int c ) {
  for (size_t i = 0; i < c; i++) {
    printf("\nPunto %d. x = %f\ty = %f\n", i + 1, a[i].x, a[i].y);
  }
}

double getDistance( P a[], int c ) {
  return sqrt( pow( ( a[ 1 ].x - a[ 0 ].x ), 2 ) + pow( ( a[ 1 ].y - a[ 0 ].y ), 2 ));
}
