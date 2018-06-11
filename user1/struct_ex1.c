#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>



// STRUTTURA CONTENENTE I DATI DELLO STUDENTE

struct _studente {
     int matricola;
     int esami_sostenuti;
     int voti[20];
};


typedef struct _studente Studente;

// FUNZIONI DA REALIZZARE


Studente crea_studente(int matricola1); //DEFINISCO UNA FUNZIONE di tipo Struct

void nuova_materia(Studente *gennarino, int voto); //FUNZIONE PER LA CREAZIONE DELLA MATERIA

float calc_media(Studente gennarino); //PASSATA LA STRUTTURA, CALCOLO LA MEDIA



Studente crea_studente(int matricola1)
     {
     Studente gennarino;
     gennarino.matricola = matricola1; //accedo al campo "matricola" della struttura definita e gli assegno il valore che ricevo in ingresso
     gennarino.esami_sostenuti = 0;
     puts("\n\nMatricola creata con successo!");
     }


void nuova_materia(Studente *gennarino, int voto)
     {
     int exams = gennarino->esami_sostenuti;  //faccio passare come valore indice all'array voti, il numero di esami sostenuti
     gennarino->voti[exams] = voto;
     gennarino->esami_sostenuti++;            //incremento il numero di esami sostenuti
     }

float calc_media(Studente gennarino)
     {
     int somma_v = 0; //inizializzo la variabile di somma dei voti per passarla all'interno del ciclo
     for (size_t i=0; i<gennarino.esami_sostenuti; i++)
          {
          somma_v += gennarino.voti[i];
          }
     return somma_v / gennarino.esami_sostenuti;
     }




int main(int argc, char *argv[])
     {
     Studente gennarino; //studente esempio
     size_t input; //VARIABILE PER IL MENU
     int val; //VARIABILE PER L'INSERIMENTO DI VALUTAZIONE
     int n_matricola,n_materie; //variabile per il numero di matricola e per il numero delle materie
     int fl_matricola = 1; //FLAG per controllare se la matricola è stata creata o meno
     float mean; //VARIABILE PER MEMORIZZARE IL VALORE DI RITORNO DELLA MEDIA
     puts("\n\n**** ESERCIZIO SLIDE 10 SULLE STRUTTURE (VOTI ED ESAMI SOSTENUTI) ***\n\n");
          do{
               puts("\n\nInserisci (1) per assegnare allo studente una matricola\n\n");
               puts("\n\nInserisci (2) per inserire una nuova materia\n\n");
               puts("\n\nInserisci (3) per calcolare la media\n\n");
               puts("\n\nInserisci (4) per uscire\n\n");

               scanf("%d",&input);

               switch(input) {

                    case 1:
                         if(fl_matricola == 1) {
                              puts("\n\nInserisci il numero di matricola: \n\n");
                              scanf("%d",&n_matricola);
                              gennarino = crea_studente(n_matricola);
                              fl_matricola = 0;
                              break;
                         } else {
                              puts("\n\nNon puoi creare di nuovo un altra matricola!\n\n");
                              break;
                         }
                    case 2:

                         puts("\n\nInserisci il numero delle materie:");
                         scanf("%d",&n_materie);

                         for(size_t i = 0; i<20; i++) {
                              printf("\nInserisci voto %d: ", i+1);
                              scanf("%d",&val);

                              nuova_materia(&gennarino,val);
                         }
                         break;
                    case 3:
                         mean = calc_media(gennarino);
                         printf("\n\nLa media della matricola %d voti e': %f",mean);
                         break;

                    case 4:
                         puts("Alla prossima!");
                         return 0;

                    default: break;
               }

          }while(input != 4);


     return 0;

     }
