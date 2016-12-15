#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(int argc,char *argv[])
{
int TimerPointActualisation=0; // initialiser TimerPointActualisation pour commencer la boucle des points et de l'acutalisation
int caractereActuel = 0;// initialiser caractereActuel à 0 pour la lecture de pbm
int compteurLigne = 0;// initialiser compteurLigne à 0 pour la lecture de pbm

FILE* fichier = NULL; //pointer "fichier" en tant qu'un fichier
FILE* date = NULL;// pointer "date" en tant qu'un fichier

fichier = fopen("/home/florian/Documents/modeVeille/date.txt", "w");// ouverture du fichier "date" ou nous allons stocker l'heure en écriture
printf("\n");// retour à la ligne
system("date +%T");// demande au système d'afficher la date

if (fichier !=NULL)
        {
        time_t now= time (NULL);// définition de l'heure actuelle sur time
        struct tm tm_now = *localtime (&now);// pointer l'heure actuelle sur l'heure locale
        char s_now[sizeof "HH:MM:SS"];// définition du format et de la taille de l'heure
        strftime (s_now, sizeof s_now, "%H:%M:%S", &tm_now);// définition de la valeur affiché classé en Heures,Minutes et Secondes
        fprintf (fichier,"%s", s_now);// écriture de l'heure dans le fichier date.txt
	}

fclose(fichier);// fermeture du fichier


	fichier = fopen("/home/florian/Documents/modeVeille/date.txt", "r");// ouverture du fichier "date" ou nous allons stocker l'heure en lecture




	if (fichier != NULL)

	{

	do// Boucle de lecture qui permet de lire chaque caractères

	{

	caractereActuel = fgetc(fichier); // lecture de chaque caractère dans le fichier

	switch(caractereActuel)
{
case 49: //si on rencontre 1
	printf("%c",178);//on affiche un carré blanc
break;// sortir de la boucle de rencontre 1
case 48: //si on rencontre 0
	printf("%c",176);//on affiche un carré gris
break;// sortir de la boucle de rencontre 0
default:
	printf("\n");//retour à la ligne quand il n'y a plus de caractères
	compteurLigne++;//on ajoute 1 au compteurLigne 
break;// sortir de la boucle de rencontre de fin de ligne
}

        } while (compteurLigne < 8 ); // Tant que le compteurLigne est inférieur à 8, la lecture et l'ecriture de l'image continue

	fclose(fichier);// fermeture du fichier "date"

	
}
	


printf("\nCet ecran sera actualise dans quelques secondes ");// afficher le message d'actualisation

compteurLigne = 0;

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

fichier = fopen("/home/florian/Documents/modeVeille/date.txt", "w");
	system("date +%T");// demande au système d'afficher la date

if (fichier !=NULL)
        {
        time_t now= time (NULL);// définition de l'heure actuelle sur time
        struct tm tm_now = *localtime (&now);// pointer l'heure actuelle sur l'heure locale
        char s_now[sizeof "HH:MM:SS"];// définition du format et de la taille de l'heure
        strftime (s_now, sizeof s_now, "%H:%M:%S", &tm_now);// définition de la valeur affiché classé en Heures,Minutes et Secondes
        fprintf (fichier,"%s", s_now);// écriture de l'heure dans le fichier date.txt
        }
	fclose(fichier);// fermeture du fichier "date"

	fichier = fopen("/home/florian/Documents/modeVeille/date.txt", "r");// ouverture du fichier "date" ou nous allons stocker l'heure en lecture




	if (fichier != NULL)

	{

	do// Boucle de lecture qui permet de lire chaque caractères

	{

	caractereActuel = fgetc(fichier); // lecture de chaque caractère dans le fichier

	switch(caractereActuel)
{
case 49: //si on rencontre 1
	printf("%c",178);//on affiche un carré blanc
break;// sortir de la boucle de rencontre 1
case 48: //si on rencontre 0
	printf("%c",176);//on affiche un carré gris
break;// sortir de la boucle de rencontre 0
default:
	printf("\n");//retour à la ligne quand il n'y a plus de caractères
	compteurLigne++;//on ajoute 1 au compteurLigne 
break;// sortir de la boucle de rencontre de fin de ligne
}

        } while (compteurLigne < 8 ); // Tant que le compteurLigne est inférieur à 8, la lecture et l'ecriture de l'image continue

	fclose(fichier);// fermeture du fichier "date"
	}

	compteurLigne = 0;

	printf("\n");// retour à la ligne
	printf("Cet ecran sera actualise dans quelques secondes ");  // afficher le message d'actualisation
	TimerPointActualisation=0; // initialiser TimerPointActualisation afin de recommencer la boucle
	}
	}
return 0;
}

