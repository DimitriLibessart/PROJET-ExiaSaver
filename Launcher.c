#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <string.h>
#include <sys/wait.h>
#define TAILLE_MAX 5000 // limite que pourra lire dans l'historique

int TypeE;
int TypeI;
FILE* fichier= NULL;
char chaine [TAILLE_MAX] = "";
int main (int argc , char *argv[]) 
{

system("clear");

int typealeatoire;
int choix=0;
int i;
int j=1;

for (i=0; i<argc; i++)
{

  if (strcmp(argv[i], "-stats")==0)
{

      j=0;
      i = argc;

printf("                                -Voici L'historique-\n\n\n");
printf("                                      -Menu-\n\n\n");
printf("                                      Historique\n");                           

fichier = fopen ("historique.txt", "r");

system("clear");

printf("Historique:\n");

if (fichier != NULL)
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

int aAleatoire (int _iMin, int _iMax)
{
return (_iMin + (rand () % (_iMax-_iMin+1)));
}

int nombreAleatoire;
sleep(1);
srand (time (NULL));
nombreAleatoire = aAleatoire (4,6);
TypeI = nombreAleatoire;


int pid; 

 pid = fork();

switch (pid)
{

case -1:
    printf("erreur\n");
break;

case 0: 
     execl("/home/dimitri/Documents/statique","statique",NULL); 
break;

default:

wait NULL;
break;
}
}

if (typealeatoire == 2)
{
    printf("-Numéro 2 : TYPE DYNAMIQUE-\n");
}

if (typealeatoire == 3)
{
    printf("-Numéro 3 : TYPE INTERACTIF-\n");
}
}
if (fichier !=NULL)
		{
		time_t now= time (NULL); //permet de recuperer l'heure actuelle (présent dans la biblio <time.h>)
 		struct tm tm_now = *localtime (&now); //permet de convertir l'heure en heure locale (du pc) (présent dans la biblio <time.h>
		char s_now[sizeof "JJ/MM/AAAA HH:MM:SS"]; //on crée une chaine pour gerer la disposition de l'heure dans le fichier
		strftime (s_now, sizeof s_now, "%d/%m/%Y %H:%M:%S", &tm_now); 
		fprintf (fichier,"%s ecran choisi aléatoirment", s_now); //on écrit le resultat dans le fichier ouvert précédeme(historique.txt)

if (TypeE == 1)
{
fprintf(fichier,"statique\n");

if (TypeI == 4)
{

fprintf(fichier,"en pause\n");
}
else if (TypeI == 5)
{
fprintf(fichier,"crane\n");
}

else if (TypeI == 6)
{
fprintf(fichier,"Ying Yang\n");
}
}

else if (TypeE == 2)
{
fprintf(fichier,"dynamique\n");
}

else if (TypeE == 3)
{
fprintf(fichier,"interactif\n");
}
}

fclose(fichier);
}





