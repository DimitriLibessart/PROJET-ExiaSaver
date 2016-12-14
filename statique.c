
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>



int main(int argc, char *argv[])

{

system("clear");

FILE* fichier = NULL;

int caractereActuel = 0;
    
int compteurLigne = 0;

int aAleatoire (int _iMin, int _iMax)
{
return (_iMin + (rand () % (_iMax-_iMin+1)));
}

int nombreAleatoire;
sleep(1);
srand (time (NULL));
nombreAleatoire = aAleatoire (4,6);

if(nombreAleatoire==4)
	{

	fichier = fopen("statique1.pbm", "r");
	}
if(nombreAleatoire==5)
	{	

	fichier = fopen("statique2.pbm", "r");
	}
if(nombreAleatoire==6)
	{

	fichier = fopen("statique3.pbm", "r");
	}

	if (fichier != NULL)

	{

        // Boucle de lecture des caracteres un a un

        do
		

        {

		caractereActuel = fgetc(fichier); // On lit le caractere

	switch(caractereActuel)
{
case 49: //1
	printf("%c",178);
break;
case 48: //0
	printf("%c",176);
break;

default:
	printf("\n");
	compteurLigne++;
break;
}

	


    } while (compteurLigne < 24 ); // Tant que le compteurLigne est inférieur à 24, la lecture et l'ecriture de l'image continue

	fclose(fichier);
}
//printf("Appuyez sur une touche pour quitter le mode veille");
system("stty cbreak -echo");
getchar();
system("stty cooked echo");
system("clear");
system("clear");
}
