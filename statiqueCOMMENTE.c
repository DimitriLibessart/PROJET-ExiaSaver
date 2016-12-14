#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>



int main(int argc, char *argv[])

{

system("clear"); //on nettoie le terminal 

FILE* fichier = NULL; //initialisation du fichier à "NULL"

int caractereActuel = 0; //initialisation de la variable caractereActuel à la valeur 0
    
int compteurLigne = 0; //initialisation de la variable compteurLigne à la valeur 0

int aAleatoire (int _iMin, int _iMax) //initialisation du choix aléatoire de l'image 
{
return (_iMin + (rand () % (_iMax-_iMin+1)));
}

int nombreAleatoire; //initialisation de la variable nombreAleatoire
sleep(1); //temp a attendre avant d'executer l'action suivante en seconde 
srand (time (NULL));
nombreAleatoire = aAleatoire (4,6); //attribution des valeurs possibles dans un intervale (entre 4 et 6) de la variable nombreAleatoire 

if(nombreAleatoire==4)
	{

	fichier = fopen("statique1.pbm", "r"); //si la valeur obtenue aprés le choix aléatoire est égal à 4 , on ouvre le fichier "statique1.pbm" avec l'argument "r" qui demande de lire  
	}
if(nombreAleatoire==5)
	{	

	fichier = fopen("statique2.pbm", "r");//si la valeur obtenue aprés le choix aléatoire est égal à 5 , on ouvre le fichier "statique2.pbm" avec l'argument "r" qui demande de lire
	}
if(nombreAleatoire==6)
	{

	fichier = fopen("statique3.pbm", "r");//si la valeur obtenue aprés le choix aléatoire est égal à 6 , on ouvre le fichier "statique3.pbm" avec l'argument "r" qui demande de lire
	}

	if (fichier != NULL) //si le fichier est différent de NULL
.
	{

        // Boucle de lecture des caracteres un a un

        do
		

        {

		caractereActuel = fgetc(fichier); // On lit le caractere

	switch(caractereActuel)
{
case 49: //1
	printf("%c",178); //si le caractére lu est un 1 , on affiche un caractére correspondant au numéro 178 de la table ASCII
break;
case 48: //0
	printf("%c",176);//si le caractére lu est un 0 , on affiche un caractére correspondant au numéro 176 de la table ASCII
break;

default:
	printf("\n");
	compteurLigne++;
break;
}

	


    } while (compteurLigne < 24 ); // Tant que le compteurLigne est inférieur à 24, la lecture et l'ecriture de l'image continue

	fclose(fichier);
}
//suite d'appel systéme permettant de quitter le processus et de rendre a main au shell en appuyant sur n'importe quel caractére du clavier 
system("stty cbreak -echo"); //appel systéme qui permet de détecter l'ajout d'un caractére sur le terminal
getchar();//permet de recuperer le caractére saisi sur le terminal
system("stty cooked echo"); //appel systéme qui permet de recuperer le caractére reconnaissable par défaut
system("clear");//nettoyage du terminal 
system("clear");//nettoyage du terminal 
}
