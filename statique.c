#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])

{

system("clear");

FILE* fichier = NULL;

int caractereActuel = 0;
    
int compteurLigne = 0;

int Aleatoire (int _iMin, int _iMax)
{
return (_iMin + (rand () % (_iMax-_iMin+1)));
}

int nombreAleatoire;

srand (time (NULL));
nombreAleatoire = Aleatoire (1,3);

if(nombreAleatoire==1)
	{	
	fichier = fopen("statique1.pbm", "r");
	}
if(nombreAleatoire==2)
	{	
	fichier = fopen("statique2.pbm", "r");
	}
if(nombreAleatoire==3)
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
case '\t': //tab
	//printf("er");
break;
default:
	printf("\n");
	compteurLigne++;
break;
}

	


        } while (compteurLigne < 24 ); // Tant que le compteurLigne est inférieur à 24, la lecture et l'ecriture de l'image continue

	fclose(fichier);
}
printf("Appuyez sur une touche pour quitter le mode veille");
system("stty cbreak -echo");
getchar();
system("stty cooked echo");
system("clear");
system("clear");

}
