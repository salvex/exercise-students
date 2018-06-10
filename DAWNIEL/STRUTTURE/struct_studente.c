#include <stdio.h>
#include <stdlib.h>
#define N 5


struct studente
{int matricola;
 int esami_sostenuti;
 int voti[N];
};
typedef struct studente Studente;


Studente crea_studente(int);

void stampa_rif(Studente * a);
void stampa_valore(Studente a);

void nuova_materia(Studente *);
int calc_media(Studente);


int main (void)
{int matricola;
 printf("Inserisci matricola\n");
 scanf("%d", &matricola);
 int media,scelta;
 Studente stud=crea_studente(matricola);
 Studente *studptr=&stud;
 printf("\nStudente inserito");

 //permette di inserire quanti voti si vuole, la media verrà fatta in base a quelli inseriti
 do
 {printf("\nPremi 1 per inserire voto, 2 per la media, 3 per uscire\n");
  scanf("%d",&scelta);


 switch(scelta)
 { case 1: nuova_materia(studptr);
		   break;
   case 2: media=calc_media(stud);
		   printf("%d",media);
		   break;
   case 3: printf("\nSto uscendo\n");
			break;
   default: printf("\nERRORE,MASSIMO DI VOTI RAGGIUNTO\n");
			break;

}

}
while (scelta!=3);


 printf("\nLa matricola dello studente è: %d",stud.matricola);

 printf("\nI voto per lo studente sono:\n");

 for (int i=0;i<N;i++)
	printf("%d\t",stud.voti[i]);


	printf("\n\n\nStampa per riferimento");
	stampa_rif(studptr);

	printf("\n\n\nStampa per valore");
	stampa_valore(stud);


return 0;
}

void stampa_rif(Studente * a)
{printf("%p",a);
}

void stampa_valore(Studente a)
{printf("\n%p",&a);


}

//anche float magari
int calc_media(Studente a)
{int count_voto=0;
 int count_materia;
 int media;
 for (int i=0;i<N;i++)
	{if (a.voti[i]!=0)
		{count_voto+=a.voti[i];
		 count_materia++;
		}
	}

media=count_voto/count_materia;
return media;

}


Studente crea_studente(int matricola)
{Studente a;
 a.matricola=matricola;
 for (int i=0;i<N;i++)
	a.voti[i]=0;
return a;
}


void nuova_materia(Studente * a)
{int voto,i=0,pos=-1;
 printf("\nInserisci nuovo voto: ");
 scanf("%d", &voto);
 for (i=0;i<N;i++)
	{if ( (*a).voti[i]==0)
	  pos=i;
	}
 if (pos==-1)
	printf("Non è possibile inserire altri valori");
  else{
		(*a).voti[pos]=voto;
		printf("\nNuovo voto inserito\n");
	}
}
