/*Scrivere un programma C che implementi il gioco della morra cinese.
Creare una struttura dati che descriva un giocatore. Essa dovrebbe
avere i membri nome e un array che indichi le mosse.*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 2

struct game{
  char* name[ 20 ];
  int mosse[10];
  const char* hand[3];
}g[SIZE];

typedef struct game Player;

void initMosse( Player g[], int m);
void mossaComputer( Player g[], int m);
void mossaUmano( Player g[], int m );
int whoIsWinner( Player g[], int n );

int main( void ) {
  int n, m;
  int i = 0, y;
  srand( time( NULL ) );
  do {
    printf( "Menu\n**************************\n1)Resetta il game precedente.\n2)Avvia il gioco.\n3)Esci brutalmente.\n**************************\n\n---> " );
    scanf( "%d", &n );
    switch ( n ) {
      case 1:
        printf( "\n\nQuanti round Dovranno affrontare i pretendenti ( max 10 )?\n\n---> " );
        scanf("%d", &m );
        initMosse( g, m );
        if ( m > 0 && m <= 10 ) {
          i = 1;
          break;
        } else {
          printf("\n\nMI ASCOLTI QUANDO PARLO? M - A - X - 1 - 0, faicle no..?\n\n" );
          i = 0;
          break;
        }
      case 2:
        if ( i == 1 ) {
          mossaUmano( g, m );
          printf("\nVUOI RIPROVARE?\n1) SI CAZZO\n2) NO COGLIONE.\n---> " );
          scanf("%d", &y);
          if ( y == 1 || y == 2  ) {
            if ( y == 1 ) {
              i = 0;
            } else {
              n = 3;
              break;
            }
          } else {
            printf("\nCAPISCO LA TUA IGNORANZA QUINDI TI FACCIO RIPROVARE.\n" );
            i = 0;
          }
          break;
        } else {
          printf("\n\nSTOLTO.. NON HAI RESETTATO.\nORDINA L'ARENA E POTRAI ISCRIVERTI AL TORNEO.\n" );
          break;
        }
      case 3:
        printf("\n\nSTO USCEND MAESTRO SUPREMO. ADDIO.\n\n" );
        break;
      default:
        break;
    }
  } while( n != 3  );
  return 0;
}

void mossaUmano( Player g[], int m ) {
  int k, z = 0, pos = -1, x = 0;
    if ( g[0].name[1] == NULL  ) {
      printf( "\n\nDIMMI IL TUO NOME IMPAVIDO GUERRIERO\n\n---> " );
      scanf( "%s", g[0].name );
      printf( "\n\nIL NOME DEL TUO AVVERSARIO\n\n---> " );
      scanf( "%s", g[1].name );
    }
  for (size_t i = 0; i < m; i++) {
    pos = -1;
    for (size_t j = 0; j < m; j++) {
      if ( g[0].mosse[ x ] == 0 && x < m ) {
        pos = x;
        do {
          printf("\n\nFAI LA TUA MOSSA\n1) Carta.\n2) Forbice.\n3) Pietra\n\n---> " );
          scanf("%d", &k);
            switch ( k ) {
            case 1:
              g[ 0 ].mosse[ x ] = 1;
              z = 1;
              break;
            case 2:
              g[ 0 ].mosse[ x ] = 2;
              z = 1;
              break;
            case 3:
              g[ 0 ].mosse[ x ] = 3;
              z = 1;
              break;
            default:
              printf("\n\nMA DICI SERIAMENTE!? LE REGOLE SONO SEMPLICI... NON CAPISCO COME FAI A SBAGLIARE.\n\n" );
              break;
          }
        } while( z != 1 );
        x += 1;
      }
      break;
    }
    if ( pos != -1 ) {
      mossaComputer( g, pos );
      whoIsWinner( g, pos );
    } else {
      break;
    }
  }
}

void mossaComputer( Player g[], int m ) {
    g[1].mosse[ m ] = rand() % 3 + 1;
  }

int whoIsWinner( Player g[], int n ) {
  if ( g[ 0 ].mosse[ n ] == 1 ) {
    if ( g[ 1 ].mosse[ n ] == 1 ) {
      printf("\n\n********************\nGAME %d\n%s\t%s\n%s\t%s\n********************\nPAREGGIO\n", n + 1, g[ 0 ].name, g[ 0 ].hand[ 0 ], g[ 1 ].name, g[ 1 ].hand[ 0 ] );
    }
    if ( g[ 1 ].mosse[ n ] == 2 ) {
      printf("\n\n********************\nGAME %d\nTU:       \t%s\nAVVERSARIO:\t%s\n********************\nHAI PERSO MERDACCIA.\n", n + 1, g[ 0 ].hand[ 0 ], g[ 1 ].hand[ 1 ] );
    }
    if ( g[ 1 ].mosse[ n ] == 3 ) {
      printf("\n\n********************\nGAME %d\nTU:       \t%s\nAVVERSARIO:\t%s\n********************\nINCREDIBILE! HAI VINTO.\nONORE, GLORIA E PUTTANE PER TE.\n", n + 1, g[ 0 ].hand[ 0 ], g[ 1 ].hand[ 2 ] );
    }
  }
  if ( g[ 0 ].mosse[ n ] == 2 ) {
    if ( g[ 1 ].mosse[ n ] == 2 ) {
      printf("\n\n********************\nGAME %d\nTU:       \t%s\nAVVERSARIO:\t%s\n********************\nPAREGGIO\n", n + 1, g[ 0 ].hand[ 1 ], g[ 1 ].hand[ 1 ] );
    }
    if ( g[ 1 ].mosse[ n ] == 3 ) {
      printf("\n\n********************\nGAME %d\nTU:       \t%s\nAVVERSARIO:\t%s\n********************\nHAI PERSO MERDACCIA.\n", n + 1, g[ 0 ].hand[ 1 ], g[ 1 ].hand[ 2 ] );
    }
    if ( g[ 1 ].mosse[ n ] == 1 ) {
      printf("\n\n********************\nGAME %d\nTU:       \t%s\nAVVERSARIO:\t%s\n********************\nINCREDIBILE! HAI VINTO.\nONORE, GLORIA E PUTTANE PER TE.\n", n + 1, g[ 0 ].hand[ 1 ], g[ 1 ].hand[ 0 ] );
    }
  }
  if ( g[ 0 ].mosse[ n ] == 3 ) {
    if ( g[ 1 ].mosse[ n ] == 3 ) {
      printf("\n\n********************\nGAME %d\nTU:       \t%s\nAVVERSARIO:\t%s\n********************\nPAREGGIO\n", n + 1, g[ 0 ].hand[ 2 ], g[ 1 ].hand[ 2 ] );
    }
    if ( g[ 1 ].mosse[ n ] == 1 ) {
      printf("\n\n********************\nGAME %d\nTU:       \t%s\nAVVERSARIO:\t%s\n********************\nHAI PERSO MERDACCIA.\n", n + 1, g[ 0 ].hand[ 2 ], g[ 1 ].hand[ 0 ] );
    }
    if ( g[ 1 ].mosse[ n ] == 2 ) {
      printf("\n\n********************\nGAME %d\nTU:       \t%s\nAVVERSARIO:\t%s\n********************\nINCREDIBILE! HAI VINTO.\nONORE, GLORIA E PUTTANE PER TE.\n", n + 1, g[ 0 ].hand[ 2 ], g[ 1 ].hand[ 1 ] );
    }
  }
}

void initMosse( Player g[], int m ) {
  const char* a[] = { "Carta", "Forbice", "Pietra" };
  for ( size_t i = 0; i < SIZE; i++ ) {
    for ( size_t j = 0; j < m ; j++ ) {
      g[ i ].name[ j ] = NULL;
      g[ i ].mosse[ j ] = 0;
    }
  }
  for (size_t i = 0; i < 3; i++) {
    g[ 0 ].hand[ i ] = a[ i ];
    g[ 1 ]. hand[ i ] = a[ i ];
  }
}
