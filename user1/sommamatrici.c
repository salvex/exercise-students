#include <stdio.h>
#include <stdlib.h>


void PrintSMatrix(int matrix1[][2], int matrix2[][2], int r3, int c3, int r4, int c4);

unsigned int CreateMatrix1(int arr1[][2], int r, int c);

unsigned int CreateMatrix2(int arr2[][2], int r2, int c2);


int main (void)
    {
    int array1[2][2] = {0};
    int array2[2][2] = {0};
    printf("\n***ESERCIZIO 5 SLIDE CONC1***\n");
    CreateMatrix1(array1,2,2);
    CreateMatrix2(array2,2,2);
    PrintSMatrix(array1,array2,2,2,2,2);
    }


unsigned int CreateMatrix1(int arr1[][2], int r, int c)
    {
    int i=0,j=0,val;

    for(size_t i=0; i<r; i++)  // ASSEGNO ELEMENTI ALLA PRIMA MATRICE
        {
        for(size_t j=0; j<c; j++)
            {
            printf("Inserisci elemento [%d] [%d]: ",i,j);
            scanf("%d",&val);
            arr1[i][j] = val;
            }
        }

    for(size_t i=0; i<r; i++)  // STAMPA PRIMA MATRICE
        {
        for(size_t j=0; j<c; j++)
            {
            printf(" %d\t",arr1[i][j]);
            if(j == 1)
            printf("\n");
            }
        }

       return arr1[i][j];
    }

unsigned int CreateMatrix2(int arr2[][2], int r2, int c2)
        {
        int i=0,j=0,val2;
        for(size_t i=0; i<r2; i++)  // ASSEGNO ELEMENTI ALLA SECONDA MATRICE
            {
            for(size_t j=0; j<c2; j++)
                {
                printf("Inserisci elemento [%d] [%d]: ",i,j);
                scanf(" %d",&val2);
                arr2[i][j] = val2;
                }
            }


        for(size_t i=0; i<r2; i++)  // STAMPA SECONDA MATRICE
            {
            for(size_t j=0; j<c2; j++)
                {
                printf(" %d\t",arr2[i][j]);
                if(j == 1)
                printf("\n");
                }
            }
         return arr2[i][j];
        }

void PrintSMatrix(int matrix1[][2], int matrix2[][2], int r3, int c3, int r4, int c4)
    {
    int c[2][2];
    int i,j;

    for(size_t i=0; i<r3; i++)              //SOMMO LE DUE MATRICI E SFRUTTO UNA TERZA MATRICE C
        {
        for(size_t j=0; j<c3; j++)
            {
            c[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }

        printf("\n***SOMMA***\n");


    for(size_t i=0; i<r3; i++)
        {
        for(size_t j=0; j<c3; j++)
            {
            printf(" %d\t",c[i][j]);   //STAMPO LA MATRICE SOMMA
            if( j == 1)
            printf("\n");
            }
        }

    }
