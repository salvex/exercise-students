#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle( int wdeck[][ 13 ] );
void deal( const int wdeck[][ 13 ], const char *wFace[], const char *wSuit[] );
void controlCombo( const int wdeck[][ 13 ], const char *wFace[], const char *wSuit[] );

int main( void ) {
  const char *suit[ 4 ] = { "Hearts", "Diamonds", "Clubs", "Spades" };
  const char *face[ 13 ] = { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

  int deck[ 4 ][ 13 ] = { 0 };

  srand( time ( NULL ) );

  shuffle( deck );
  deal( deck, face, suit );
  controlCombo( deck, face, suit );
  return 0;
}

void shuffle( int wdeck[][ 13 ] ) {
  int row, column, card;

  for ( card = 1; card <= 52; card++ ) {
    do {
      row = rand() % 4;
      column = rand() % 13;
    } while( wdeck[ row ][ column ] != 0 );
    wdeck[ row ][ column ] = card;
  }
}

void deal( const int wdeck[][ 13 ], const char *wFace[], const char *wSuit[] ) {
  int row, column, card;

  for ( card = 1; card <= 5; card++ ) {
    for ( row = 0; row <= 3; row++ ) {
      for ( column = 0; column <= 12; column++ ) {
        if ( wdeck[ row ][ column ] == card ) {
          printf( "%5s of %-8s%c", wFace[ column ], wSuit[ row ], card % 2 == 0 ? '\n' : '\t' );
        }
      }
    }
  }
}

void controlCombo( const int wdeck[][ 13 ], const char *wFace[], const char *wSuit[] ) {
  int row, column, card;
  for ( card = 1; card <= 5; card++ ) {
    for ( row = 0; row <= 3; row++ ) {
      for ( column = 0; column <= 12; column++ ) {
        int i = 0;
        for (size_t check = 0; check < 12; check++) {
          if ( wdeck[ row ][ column ] == card && wFace[ column ] == wFace[ check ] ) {
            i++;
          }
          if ( i == 2 ) {
            puts("COPPIA");
          } else if ( i == 3){
            puts("TRIS");
          } else if ( i == 4 ) {
            puts("POKER");
          }
        }
      }
    }
  }

}
