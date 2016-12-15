#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <string.h>


void vertical (const char* str)
{
    int v;
    int h;
	int compteur=0;
	int caractere = 0;
	FILE* fichier = NULL;
	int aAleatoire (int _iMin, int _iMax) //initialisation du choix aléatoire de l'image 
{
return (_iMin + (rand () % (_iMax-_iMin+1)));
}

int nombreAleatoire; //initialisation de la variable nombreAleatoire
//sleep(1); //temp a attendre avant d'executer l'action suivante en seconde 
srand (time (NULL));
nombreAleatoire = aAleatoire (4,8); //attribution des valeurs possibles dans un intervale (entre 4 et 6) de la variable nombreAleatoire 

if(nombreAleatoire==4)
	{

	fichier = fopen("cubain.pbm", "r"); //si la valeur obtenue aprés le choix aléatoire est égal à 4 , on ouvre le fichier "statique1.pbm" avec l'argument "r" qui demande de lire  
	}
if(nombreAleatoire==5)
	{	

	fichier = fopen("cubdeu.pbm", "r");//si la valeur obtenue aprés le choix aléatoire est égal à 5 , on ouvre le fichier "statique2.pbm" avec l'argument "r" qui demande de lire
	}
if(nombreAleatoire==6)
	{

	fichier = fopen("cubtroi.pbm", "r");//si la valeur obtenue aprés le choix aléatoire est égal à 6 , on ouvre le fichier "statique3.pbm" avec l'argument "r" qui demande de lire
	}
if(nombreAleatoire==7)
	{
	
	fichier = fopen("cubquatre.pbm", "r");
	}
if(nombreAleatoire==8)
	{

	fichier = fopen("cubcinq.pbm", "r");
	}
	do
	{
		caractere = fgetc(fichier);	
		compteur++;
	}while(caractere!=13);

    for (v = 0; v < (40-(compteur/2)); v++)
    {
        putchar(' ');
    }
    for (h = 0; v < (12-(compteur/2)); h++)
    {
        putchar(' ');
    }
    printf("%s", str);
}

int main(void)
{
	FILE* fichier = NULL;
	int caractere;
	int nbr_ligne=0;
	int nbr_ligne2;
	

int aAleatoire (int _iMin, int _iMax) //initialisation du choix aléatoire de l'image 
{
return (_iMin + (rand () % (_iMax-_iMin+1)));
}

int nombreAleatoire; //initialisation de la variable nombreAleatoire
sleep(1); //temp a attendre avant d'executer l'action suivante en seconde 
srand (time (NULL));
nombreAleatoire = aAleatoire (4,8); //attribution des valeurs possibles dans un intervale (entre 4 et 6) de la variable nombreAleatoire 

if(nombreAleatoire==4)
	{

	fichier = fopen("cubain.pbm", "r"); //si la valeur obtenue aprés le choix aléatoire est égal à 4 , on ouvre le fichier "statique1.pbm" avec l'argument "r" qui demande de lire  
	}
if(nombreAleatoire==5)
	{	

	fichier = fopen("cubdeu.pbm", "r");//si la valeur obtenue aprés le choix aléatoire est égal à 5 , on ouvre le fichier "statique2.pbm" avec l'argument "r" qui demande de lire
	}
if(nombreAleatoire==6)
	{

	fichier = fopen("cubtroi.pbm", "r");//si la valeur obtenue aprés le choix aléatoire est égal à 6 , on ouvre le fichier "statique3.pbm" avec l'argument "r" qui demande de lire
	}
if (nombreAleatoire==7)
	{
	fichier = fopen("cubquatre.pbm", "r");
	}
if (nombreAleatoire==8)
	{
	fichier = fopen("cubcinq.pbm", "r");
	}

	if (fichier != NULL) //si le fichier est différent de NULL

	{
	do
	{
		caractere = fgetc(fichier);	
		if(caractere==13) {nbr_ligne++;}
	}while(caractere!=EOF);
	nbr_ligne=(24-nbr_ligne)/2;
	nbr_ligne2=nbr_ligne;
	//printf("%d",nbr_ligne);
	rewind(fichier);
	printf("\n");
	while(nbr_ligne!=0){nbr_ligne--;printf("\n");}
	vertical("");
	do
	{
		caractere = fgetc(fichier);
		if(caractere==48) {printf(" ");}
		if(caractere==49) {printf("\xe2\x96\x88");}
		if(caractere==13) {printf("\n");vertical("");}

	}while (caractere != EOF);
	while(nbr_ligne2!=0){nbr_ligne2--;printf("\n");}

	printf("\n");
}
//suite d'appel systéme permettant de quitter le processus et de rendre a main au shell en appuyant sur n'importe quel caractére du clavier 
system("stty cbreak -echo"); //appel systéme qui permet de détecter l'ajout d'un caractére sur le terminal
getchar();//permet de recuperer le caractére saisi sur le terminal
system("stty cooked echo"); //appel systéme qui permet de recuperer le caractére reconnaissable par défaut
system("clear");//nettoyage du terminal 
system("clear");//nettoyage du terminal 

	return 0;
}
