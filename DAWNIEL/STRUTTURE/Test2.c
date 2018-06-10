#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//definizione struct
struct card {
  char *face;
  char *suit;
};
//definizione tipo struct come "Card"
typedef struct card Card;
//definizione prototipi funzione
void fillDeck( Card *const wDeck, const char *wFace[], const char *wSuit[] );
void shuffle( Card *const wDeck );
void deal( const Card *const wDeck );

//inizio programma
int main( void ) {
  Card deck[ 52 ];

  const char *face[ 13 ] = { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
  const char *suit[ 4 ] = { "Hearts", "Diamonds", "Clubs", "Spades" };

  srand( time( NULL ) );

  fillDeck( deck, face, suit );
  shuffle( deck );
  deal( deck );

  return 0;
}//fine programma

void fillDeck( Card *const wDeck, const char *wFace[], const char *wSuit[] ) {
  for (size_t i = 0; i < 52; i++) {
    wDeck[ i ].face = wFace[ i % 13 ];
    wDeck[ i ].suit = wSuit[ i / 13 ];
  }
}

void shuffle( Card *const wDeck ) {
  Card temp;
  int j;
  for (size_t i = 0; i < 52; i++) {
    j = rand() % 52;
    temp = wDeck[ i ];
    wDeck[ i ] = wDeck[ j ];
    wDeck[ j ] = temp;
  }
}

void deal( const Card *const wDeck ) {
  for (size_t i = 0; i < 52; i++) {
    printf("%5s of %-8s%c", (wDeck + i)->face, (wDeck + i)->suit, ( i + 1 ) % 2 == 0 ? '\t' : '\n');
  }
}
