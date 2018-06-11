/*Creare una struttura dati che descriva un ristorante. Essa dovrebbe avere i membri che contengano il nome,
l’indirizzo, il costo medio e il tipo di cibo proposto. Scrivere un programma che stampi tutti i ristoranti che
propongono un certo tipo di cibo in ordine di prezzo, a partire dal meno costoso.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 30

struct ristoranti {
  char *name[SIZE];
  char *address[SIZE];
  char *foodTyp[SIZE];
  float price;
};
typedef struct ristoranti Ristoranti;

void ini( Ristoranti a[], int s );
void putName( Ristoranti a[], int s );
void putAddress( Ristoranti a[], int s );
void putFood( Ristoranti a[], int s );
void putPrice( Ristoranti a[], int s );
void priceSort( Ristoranti a[], int s );





int main( void ) {
  int z, s;

    printf("Inserisci il numero di ristoranti: ");
    scanf("%d", &s);
    if ( s > 0 ) {
      Ristoranti a[ s ];
      ini( a, s );

      /*for (size_t i = 0; i < s; i++) {
        printf("Struct %d:\n%s\n%s\n%s\n%f", i + 1, a[ i ].name, a[ i ].address, a[ i ].foodTyp, a[ i ].price );
        puts("");
      }*/

      do {
        printf( "Digita 1 per inserire un nuovo ristorante, 2 per terminare: " );
        scanf( "%d", &z );
        puts("");
        switch ( z ) {
          case 1:
            putName( a, s );
            putAddress( a, s );
            putFood( a, s );
            putPrice( a, s );
            break;
          case 2:
            break;
          default:
            printf( "\n\nValore non valido!!!!!!!\n\n" );
        }
      } while( z != 2 );

      priceSort( a, s );

      for (size_t i = 0 ; i < s; i++) {
        printf( "%d.\tNome: %s\n   \tVia: %s\n   \tCibo: %s\n   \tPrezzo Medio: %.2fEURO\n\n", i + 1, a[ i ].name, a[ i ].address, a[ i ].foodTyp, a[i].price );
      }




    } else {
      printf("\nValore non valido\n" );
    }
  return 0;
}

void putName( Ristoranti a[], int s ) {
  int pos = -1;
  for (size_t i = 0; i < s; i++) {
    for (size_t k = 0; k < SIZE - 1; k++) {
      if ( a[i].name[k] == NULL ) {
        pos = i;
      }
      break;
    }

  }
  if ( pos == -1 ) {
    printf("\nImpossibile inserire altri valori\n\n" );
  } else {
    printf("\nInserisci il nome del ristorante: " );
    scanf("%s", a[ pos ].name );
  }
}

void putAddress( Ristoranti a[], int s ) {
  int pos = -1;
  for (size_t i = 0; i < s; i++) {
    for (size_t k = 0; k < SIZE - 1; k++) {
      if ( a[i].address[k] == NULL ) {
        pos = i;
      }
      break;
    }

  }
  if ( pos == -1 ) {
  } else {
    printf("\nInserisci la via: " );
    scanf("%s", a[ pos ].address );
  }
}

void putFood( Ristoranti a[], int s ) {
  int pos = -1;
  for (size_t i = 0; i < s; i++) {
    for (size_t k = 0; k < SIZE - 1; k++) {
      if ( a[i].foodTyp[k] == NULL ) {
        pos = i;
      }
      break;
    }

  }
  if ( pos == -1 ) {
  } else {
    printf("\nInserisci il tipo di pitto servito: " );
    scanf("%s", a[ pos ].foodTyp );
  }
}

void putPrice( Ristoranti a[], int s ) {
  int pos = -1;
  for (size_t i = (s - 1); i >= 0; i--) {
    if ( a[i].price == 0 ) {
      pos = i;
      break;
    }
  }
  if ( pos == -1 ) {
  } else {
    printf("\nInserisci il prezzo medio per pietanza: " );
    scanf("%f", &a[ pos ].price );
  }
}

void ini( Ristoranti a[], int s ) {
  for (size_t i = 0; i < s; i++) {
    for (size_t k = 0; k < s; k++) {
      a[ i ].name[k] = 0;
      a[ i ].address[k] = 0;
      a[ i ].foodTyp[k] = 0;
    }
    a[ i ].price = 0;
  }
}

void priceSort( Ristoranti a[], int s ) {
  Ristoranti h;
  h.price = 0;
  for (int i = 0; i < s - 1 ; i++) {
    for (size_t j = 0; j < s - 1 - i; j++) {
      if ( a[ j ].price < a[ j + 1 ].price ) {
        h = a[ j ];
        a[ j ] = a[ j + 1 ];
        a[ j + 1 ] = h;
    }
    }
  }
}
