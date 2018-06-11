#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define C_SIZE 20 //dimensione della stringa
#define R_SIZE 5 // ""dimensione"" ristoranti (sarebbe il numero di ristoranti)

struct restaurants {
     char nome[C_SIZE];
     char indirizzo[C_SIZE];
     char food_type[C_SIZE];
     float price;
};

// 5 RISTORANTI

typedef struct restaurants rist;

void SetName(rist mylista[R_SIZE]);

void SetAddress(rist my2lista[R_SIZE]);

void SetFoodT(rist my3lista[R_SIZE]);

void SetPrice(rist my4lista[R_SIZE]);




void SetPrice(rist my4lista[R_SIZE])
     {
          for(int i=0; i<R_SIZE; i++) {
               printf("\n\nInserisci il prezzo %d:",i+1);
               scanf("%f",&my4lista[i].price);
          }

     }

void SetName(rist mylista[R_SIZE])
     {
          for(size_t i=0; i<R_SIZE; i++) {
               printf("\n\nInserisci il nome del ristorante %d:",i+1);
               scanf("%s",mylista[i].nome);
          }
     }

void SetAddress(rist my2lista[R_SIZE])
     {
               for(size_t i=0; i<R_SIZE; i++) {
                    printf("\n\nInserisci il nome dell'indirizzo %d:",i+1);
                    scanf("%s",my2lista[i].indirizzo);
               }
     }


void SetFoodT(rist my3lista[R_SIZE])
     {
               for(size_t i=0; i<R_SIZE; i++) {
                    printf("\n\nInserisci il nome del cibo %d: ",i+1);
                    scanf("%s",my3lista[i].food_type);
                    }
     }





int main(int argc, char *argv[])
     {
     rist lista[R_SIZE];
     //char name[20], name_var; // Variabili per il nome
     int selection; // VARIABILE PER LA SELEZIONE

     puts("\n\n***ESERCIZIO RISTORANTI SLIDE 10***\n\n"); //INIZIALIZZO gli elementi della struttura
          for(size_t i=0; i<R_SIZE; i++) {
               for(size_t j=0; j<C_SIZE; j++) {
                    lista[i].nome[j] = 0;
                    lista[i].indirizzo[j] = 0;
                    lista[i].food_type[j] = 0;
                    lista[i].price = 0;
               }
          }

          do{
               puts("\n\nInserisci (1) per aggiungere il nome al ristorante\n\n");
               puts("\n\nInserisci (2) per aggiungere l'indirizzo al ristorante\n\n");
               puts("\n\nInserisci (3) per aggiungere il cibo del ristorante\n\n");
               puts("\n\nInserisci (4) per aggiungere il prezzo dei cibi\n\n");
               puts("\n\nInserisci (5) per uscire\n\n");
               scanf("%d",&selection);

               switch(selection) {

                    case 1:
                         SetName(lista);
                         break;
                    case 2:
                         SetAddress(lista);
                         break;
                    case 3:
                         SetFoodT(lista);
                         break;
                    case 4:
                         SetPrice(lista);
                         break;
                    case 5:
                         puts("\n\nArrivederci!");
                         return 0;



               }


          }while(selection != 5);

     return 0;
     }
