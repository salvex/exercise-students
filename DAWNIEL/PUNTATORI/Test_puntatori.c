#include <stdio.h>

int main( void ) {
  int *counterptr = NULL, counter = 5;
  counterptr = &counter;
  printf( "%d\n", *counterptr );

  return 0;
}
