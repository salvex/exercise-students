#include <stdio.h>



int main (void) 
	{
	int a,b,c,d;
	float e,f,g,h;
	printf("Inserisci l'ID e il tempo del primo corridore: ");
	scanf("%d - %f",&a,&e);
	printf("Inserisci l'ID e il tempo del secondo corridore: ");
	scanf("%d - %f",&b,&f);
	printf("Inserisci l'ID e il tempo del terzo corridore: ");
	scanf("%d - %f",&c,&g);
	printf("Inserisci l'ID e il tempo del quarto corridore: ");
	scanf("%d - %f",&d,&h);
		if(e == f || f == g) 
		{
		g == h;
		a == h;
        printf("Siete dei robot così efficienti da avere la medesima velocità!");
		}
	}