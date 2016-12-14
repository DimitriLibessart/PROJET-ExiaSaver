#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <string.h>
#include <sys/wait.h>
#define TAILLE_MAX 5000 // limite que pourra lire dans l'historique

int TypeE; //type resultat du random qui définie le type d'ecran choisi
int TypeI; // type resultat du random présent dans le type statique  
FILE* fichier= NULL; //initialisation du fichier à "vide"
char chaine [TAILLE_MAX] = ""; //initialisation du nombre de caractére a lire par la constante [TAILLE_MAX]
int main (int argc , char *argv[]) 
{

system("clear"); //nettoyage du terminal
int typealeatoire; //initialisation du 1er random 
int choix=0; //initialisation du choix du random à 0
int i; //initialisation de la variable i 
int j=1; //initialisation de la varaible j avec la valeur 1

for (i=0; i<argc; i++) //lorsque i vaut 0 , et qu'il est inférieur à "argc" , on ajoute 1 à la variable i
{

  if (strcmp(argv[i], "-stats")==0) //comparaison des caractéres (défini dans la bibliothéque <string.h>) "-stats" dans le terminal
{

      j=0;//donne la valeur 0 à la variable j 
      i = argc; //donne la liste de caractére à la variable i 

printf("                                -Voici L'historique-\n\n\n");
printf("                                      -Menu-\n\n\n");
printf("                                      Historique\n");                           

fichier = fopen ("historique.txt", "r"); //overture du fichier historique.txt

system("clear"); //nettoyage du terminal 

printf("Historique:\n");

if (fichier != NULL) //si le fichier n'est pas vide 
{
   while (fgets(chaine, TAILLE_MAX , fichier) != NULL) 
       printf("%s",chaine);
}
}
}


if (j==1)
{

int Aleatoire (int _iMin, int _iMax)   // random 
{
           srand (time (NULL));
            return (_iMin + (rand () % (_iMax-_iMin+1))); 
}
typealeatoire = Aleatoire(1,3); //initialisé les 3 choix possibles

 if (typealeatoire ==1) //si le random arrive sur 1
{
    printf("-Numéro 1 : TYPE STATIQUE-\n");

int aAleatoire (int _iMin, int _iMax) //initialisation du 2eme choix aléatoire (egalement présenta dans le statique.c)
{
return (_iMin + (rand () % (_iMax-_iMin+1)));
}

int nombreAleatoire;
sleep(1);
srand (time (NULL));
nombreAleatoire = aAleatoire (4,6);
TypeI = nombreAleatoire;


int pid;  //fonction d'initialisation du processus fils grâce à fork()

 pid = fork();

switch (pid)
{

case -1: //la valeur -1 correspond à l'erreur par défaut
    printf("erreur\n");
break;

case 0: 
     execl("/home/maxime/Documents/statique","statique",NULL); //la valeur 0 correspond a l'ouverture du processus 
break;

default:

wait NULL; //on ordonne au processus pére (Launcher) d'attendre la fin du processus fils avant de continuer afin d'eviter que celui-ci devienne un processus zombie 
break;
}
}

if (typealeatoire == 2) //si le random arrive sur 2 
{
    printf("-Numéro 2 : TYPE DYNAMIQUE-\n");
}

if (typealeatoire == 3) //si le random arrive sur 3
{
    printf("-Numéro 3 : TYPE INTERACTIF-\n");
}
}
if (fichier !=NULL) //fonction d'ecriture dans le fichier "historique.txt"
		{
		time_t now= time (NULL); //permet de recuperer l'heure actuelle (présent dans la biblio <time.h>)
 		struct tm tm_now = *localtime (&now); //permet de convertir l'heure en heure locale (du pc) (présent dans la biblio <time.h>
		char s_now[sizeof "JJ/MM/AAAA HH:MM:SS"]; //on crée une chaine pour gerer la disposition de l'heure dans le fichier
		strftime (s_now, sizeof s_now, "%d/%m/%Y %H:%M:%S", &tm_now); 
		fprintf (fichier,"%s ecran choisi aléatoirment", s_now); //on écrit le resultat dans le fichier ouvert précédeme(historique.txt)

if (TypeE == 1) //si le resultat du premier random vaut 1 
{
fprintf(fichier,"statique\n"); //impression de "statique" dans le fichier 

if (TypeI == 4) //si le resultat du random dans le statique vaut 4 
{

fprintf(fichier,"en pause\n"); //imptession du titre de l'image (en pause) dans le fichier 
}
else if (TypeI == 5)//si le resultat du random dans le statique vaut 5
{
fprintf(fichier,"crane\n");
}

else if (TypeI == 6) //si le resultat du random dans le statique vaut 4 
{
fprintf(fichier,"Ying Yang\n");
}
}

else if (TypeE == 2) //si le resultat du 1er random  vaut 4 
{
fprintf(fichier,"dynamique\n")//impression de "dynamique" dans le fichier 
}

else if (TypeE == 3) //si le resultat du 1er random  vaut 3
{
fprintf(fichier,"interactif\n"); //impression de "interactif" dans le fichier 
}
}

fclose(fichier); //fermeture du fichier .txt
}


