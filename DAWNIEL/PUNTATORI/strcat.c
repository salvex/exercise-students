/*Scrivere una funzione C che implementi la funzione
strcat che concatena due stringhe passate come
parametri.*/
#include <stdio.h>
#include <stdlib.h>

void myStrcat(char *s1, char *s2, char *result);

int main( void ) {
  char s1[] = "Ciao";
  char s2[] = "Come stai";
  char result[20];
  printf("La prima stringa: %s\nLa seconda stringa: %s\n", s1, s2 );
  myStrcat( s1, s2, result);

  return 0;
}

void myStrcat(char *s1, char *s2, char *result) {
  int i = 0;
  while ( *( s1 + i ) != '\0' ) {
    *( result + i ) = *( s1 + i );
    i++;
  }
  *(result + i) = ' ';
  i++;
  int j = 0;
  while ( *( s2 + j ) != '\0' ) {
    *( result + i ) = *( s2 + j );
    ++j;
    ++i;
  }
  ++i;
  *(result + i) = '\0';
  printf("La stringa risultante e': %s\n", result);

}
