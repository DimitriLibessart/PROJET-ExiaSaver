#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(int argc,char *argv[])
{
int TimerPointActualisation=0; // initialiser TimerPointActualisation pour commencer la boucle
int caractereActuel = 0;
int compteurLigne = 0;

FILE* fichier = NULL; //pointer "date" en tant qu'un fichier
FILE* date = NULL;

fichier = fopen("/home/florian/Documents/modeVeille/date.txt", "w");
printf("\n");// retour à la ligne
system("date +%T");

if (fichier !=NULL)
        {
        time_t now= time (NULL);
        struct tm tm_now = *localtime (&now);
        char s_now[sizeof "HH:MM:SS"];
        strftime (s_now, sizeof s_now, "%H:%M:%S", &tm_now);
        fprintf (fichier,"%s", s_now);
	}

fclose(fichier);


	fichier = fopen("/home/florian/Documents/modeVeille/date.txt", "r");




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

	


        } while (compteurLigne < 8 ); // Tant que le compteurLigne est inférieur à 24, la lecture et l'ecriture de l'image continue

	fclose(fichier);

	
}
	


printf("\nCet ecran sera actualise dans quelques secondes ");// afficher le message d'actualisation

//============================================DEBUT DE LA BOUCLE==========================================================================

while(TimerPointActualisation < 100)// boucle infini
	{
	
	if(TimerPointActualisation<10)//si TimerPointActualisation est inférieur à 10
	{
	printf(".");// afficher un point
	fflush(stdout);// vider le buffer(fonction qui permet d'éviter que les points ne s'affichent tous d'un coup)
	sleep(1);// faire une pause de 1 seconde
	TimerPointActualisation++;// ajouter 1 à TimerPointActualisation
	}
	else
	{
	system("clear"); // demande au système de nettoyer la console
	printf("\n"); // retour à la ligne

date = fopen("/home/florian/Documents/modeVeille/date.txt", "r+");
	system("date +%T");

if (date !=NULL)
        {
        time_t now= time (NULL);
        struct tm tm_now = *localtime (&now);
        char s_now[sizeof "HH:MM:SS"];
        strftime (s_now, sizeof s_now, "%H:%M:%S", &tm_now);
        fprintf (date,"%s", s_now);
        }
	fclose(date);

	printf("\n");// retour à la ligne
	printf("Cet ecran sera actualise dans quelques secondes ");  // afficher le message d'actualisation
	TimerPointActualisation=0; // initialiser TimerPointActualisation afin de recommencer la boucle
	}
	}
return 0;
}

