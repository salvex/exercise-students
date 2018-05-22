#include <stdio.h>
#include <stdlib.h>

#define SIZE 10



int main(void)
    {
    int val = 0; //Inizializzo a 0 i valori di immissione
    int h1,h2; //Inizializzo gli holder
    int array[SIZE];  //inizializzo l'array (con la dimensione predefinita a SIZE)

    for(int i=0; i<SIZE; i++) //CICLO PER IMPOSTARE I VALORI DELL'ARRAY
        {
        printf("Inserisci il valore %d: ",i+1);
        scanf("%d",&val);
        array[i] = val; //indicizzare l'array a i
        }

    for(int i=0; i<SIZE; i++)
        {
        if (array[i] > array[i+1]) //Algoritmo di posizionamento (valore maggiore)
            {
            h1 = array[i];
            array[i] = array[i+1];
            array[i+1] = h1;
            } else {
            h2 = array[i+1];
            array[i+1] = array[i];
            array[i] = h2;
            }
        }

    printf("il piu grande valore e': %d\n",h1);
    printf("il più piccolo valore e': %d\n",h2);
    }
