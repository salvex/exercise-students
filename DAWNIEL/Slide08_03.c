/*Scrivere un programma C che, facendo uso delle
funzioni, copi gli elementi di un array in un altro array
della stessa lunghezza.*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void copyArray(int a[],int b[],int m);
void printArray(int arr[],int n);

int main (void) {
 int a[SIZE] = { 1, 3, 44, 12, 5 };
 int b[SIZE];

 printArray(a, SIZE);
 copyArray(a, b, SIZE);
 printArray(b, SIZE);
}

void copyArray(int a[],int b[],int m) {
 for(size_t i = 0; i < m; ++i){
  b[i] = a[i];

 }
}

void printArray(int arr[],int n){
 for(size_t i=0; i< n; ++i){
  printf(" %d", arr[i]);
 }
 printf("\n");
}
