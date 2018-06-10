/*Creare una struttura dati che descriva un ristorante. Essa dovrebbe avere i membri che contengano il nome,
l’indirizzo, il costo medio e il tipo di cibo proposto. Scrivere un programma che stampi tutti i ristoranti che
propongono un certo tipo di cibo in ordine di prezzo, a partire dal meno costoso.*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

struct ristorante {
  char name[SIZE];
  char address[SIZE];
  float avgPrice;
  char foodTyp[SIZE];
};
typedef struct ristorante Ristorante;

void giveName( Ristorante *a, int n);
void giveAddress( Ristorante *a, int n );
void givePrice( Ristorante *a, int n );
void typFood( Ristorante *a, int n );
void initializer( Ristorante *a, int n, int m );

int main( void ) {
  int s, z;


  printf( "Inserisci il numero di ristoranti da catalogare: " );
  scanf( "%d", &s );
  if ( s > 0 ) {
    Ristorante ris[ s ];
    Ristorante *risPtr = ris;
    initializer( risPtr, SIZE, s );


    do {
      printf( "Digita 1 per inserire un nuovo ristorante, 2 per terminare: " );
      scanf( "%d", &z );
      switch ( z ) {
        case 1:
          giveName( risPtr, s );
          printf("\n%s\n",ris[ s ].name );
          giveAddress( risPtr, s );
          givePrice( risPtr, s );
          typFood( risPtr, s );
          break;
        case 2:
          break;
        default:
          printf( "\n\nValore non valido!!!!!!!\n" );
      }

    } while( z != 2 );
  } else {
    printf( "\nNessun ristorante inserito." );
  }
  return 0;
}

void giveName( Ristorante *a, int n) {
  int control = -1;
  for (int i = 0; i < n; i++) {
    if( a[ i ].name == 0 ) {
      control = i;
      break;
    }
  }
  printf( "Inserisci il nome del ristorante: " );
  scanf("%s", a[ control ].name );
}

void giveAddress( Ristorante *a, int n) {
  int control = -1;
  for (int i = 0; i < n; i++) {
    if( a[ i ].address == 0 ) {
      control = i;
      break;
    }
  }
  printf( "Inserisci l'indirizzo: " );
  scanf("%s", a[ control ].address );
}

void typFood( Ristorante *a, int n) {
  int control = -1;
  for (int i = 0; i < n; i++) {
    if( a[ i ].foodTyp == 0 ) {
      control = i;
      break;
    }
  }
  printf( "Inserisci il tipo di cibo servito : " );
  scanf("%s", a[ control ].foodTyp );
}

void givePrice( Ristorante *a, int n ) {
  int control = -1;
  for (int i = 0; i < n; i++) {
    if ( a[i].avgPrice == 0 ) {
      control = i;
      break;
    }
  }
  printf("Inserisci il prezzo medio del ristorante : " );
  scanf("%d", a[control].avgPrice );
}

void initializer( Ristorante *a, int n , int m) {
  int controllo = 0;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      a[i].name[j] = 0;
      a[i].address[j] = 0;
      a[i].foodTyp[j]= 0;
    }
    a[i].avgPrice = 0;
  }
}
