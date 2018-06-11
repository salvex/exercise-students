#include <stdio.h>

struct card {
  const char *a[10];
};

typedef struct card Card;

void insert( Card *const w );

int main( void ) {
  Card g;
  for (size_t i = 0; i < 1; i++) {
    g.a[1] = NULL;
  }
  if ( g.a[1] == NULL ) {
    printf( "\n\nDIMMI IL TUO NOME IMPAVIDO GUERRIERO\n\n---> " );
    scanf( "%s", g.a );
    printf("%s", g.a );

return 0;
}
}
