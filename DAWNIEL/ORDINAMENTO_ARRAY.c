#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int main()
{

int n[] = {3, 5, 7, 8, 1, 2, 6, 4, 9, 0};
int i, j, temp;

for ( i = 0; i < MAX; ++i )
for ( j = i; j < MAX; j++ ) {
if ( n[j] < n[i] ) {
/* swap data */
temp = n[i];
n[i] = n[j];
n[j] = temp;
}
}

printf("\n\nL'ordine crescente dei numeri e':\n");

for (i = 0; i < MAX; i++) {
printf("%d\n", n[i]);
}


return 0;
}
