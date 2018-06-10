#include <stdio.h>

struct card {
  char *face[100];
};

typedef struct card Card;

void insert( Card *const w );

int main( void ) {
  Card a[2];
  for (size_t i = 0; i < 2; i++) {
    for (size_t k = 0; k < 2; k++) {
      a[i].face[k] = 0;
    }
  }
  for (size_t x = 0; x < 2; x++) {
    scanf("%s", a[x].face );
    printf("%s\n", a[x].face);
  }


  return 0;
}

void insert( Card *const w ) {
  int pos, d;
  char c;

  do {
    printf("scegli 1 o 0\n" );
    scanf("%d", &d );

    pos = -1;
    for (size_t i = 0; i < 2; i++) {
      if ( w[i].face == 0 ) {
        pos = i;
      }
    }
    if (pos != -1 ) {
      printf("Inserisci il nome del ristorante: " );
      scanf("%s", w[pos].face);

      printf("\n%s\n", w[pos].face);
    }
  } while( d != 0 );
}
