/*STRUTTURA STUDENTE*/
#include <stdio.h>
#include <stdlib.h>
#define VOTE 5

struct studente {
  int matricola;
  int esami_sostenuti;
  int voti[ VOTE ];
};
typedef struct studente Studente;

Studente crea_studente( int matricola );
void nuova_materia( Studente *a );
float calc_media( Studente a );

int main( void ) {
  unsigned int c;
  int matricola;
  float media;


  printf( "Inserisci matricola studente: " );
  scanf( "%d", &matricola );
  if ( matricola < 0 ) {
    printf( "Valore non consentito\n" );
  } else {

    Studente stud = crea_studente( matricola );
    Studente *studPtr = &stud;

      do {
        printf( "Inserisci 1 per inserire un voto, 2 per ottenere la media attuale, 3 per uscire:\n" );
        scanf( "%d", &c );
        switch ( c ) {
          case 1: nuova_materia( studPtr );
            break;
          case 2: media = calc_media( stud );
            printf( "La media attuale e': %.3f\n\n", media );
            break;
          case 3: break;
          default: printf( "Valore non consentito.\n" );
            break;
        }
      } while( c != 3 );

      printf("I voti inseriti, dello studente %d, sono: \n", matricola );
      for (size_t i = 0; i < VOTE; i++) {
        printf("Esame.%d = %d\n", VOTE - i, stud.voti[i] );
      }
      printf("\n\n");
      printf("La media finale dello studente e': %.3f\n", media );
      printf("Fine programma\n" );



  }


  return 0;
}

Studente crea_studente( int matricola ) {
  Studente a;
  a.matricola = matricola;
  for (size_t i = 0; i < VOTE; i++) {
    a.voti[ i ] = 0;
  }
  return a;
}

void nuova_materia( Studente *a ) {
  int pos = -1, i = 0, voto;
  for ( i = 0; i < VOTE; i++) {
    if ( (*a).voti[i] == 0 ) {
      pos = i;
    }
  }
    if ( pos == -1 ) {
      printf( "Impossibile inserire altri voti\n" );
    } else {
      printf( "Inserisci un voto (da 0 a 100): " );
      scanf( "%d", &voto );
        if ( voto >= 0 && voto <= 100 ) {
          (*a).voti[ pos ] = voto;
          printf("\nNuovo voto inserito.\n");
        } else {
          printf("\nValore non valido. Riprova.\n");
        }
    }
}

float calc_media( Studente a ) {
  int i, sum = 0;
  float j = 0, avg;
  for (i = 0; i < VOTE; i++) {
    if ( a.voti[ i ] != 0 ) {
      sum += a.voti[ i ];
      j++;
    }
  }
  if ( j == 0 ) {
    return 0;
  } else {
    avg = sum / j;
    return avg;
  }

}
