#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <string.h>
#include <sys/wait.h>


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
printf("                             1:Historique du type statique\n");
printf("                             2:Historique du type dynamique\n");
printf("                             3:Historique du type interactif\n\n");
printf("                  Veuillez choisir entre 1 et 3 pour voir les historiques\n");
        scanf("%d",&choix);

switch (choix)
{

case 1:
     printf("Voici l'historique : Type Statique\n");
     break;

    
case 2:
     printf("Voici l'historique : Type Dynamique\n");
     break;


case 3:
     printf("Voici l'historique : Type Interactif\n");
     break;


default:
     printf("Vous vous êtes trompé\n");
      break;  

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
    printf("Numéro 1 : TYPE STATIQUE\n");


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




/*
typealeatoire = Aleatoire(1,3); //initialisé les 3 choix possibles

  if (typealeatoire ==1) //si le random arrive sur 1
{
    printf("Numéro 1 : TYPE STATIQUE\n");
    execl("/home/dimitri/Documents/statique","statique",NULL); 

}
 else if (typealeatoire ==2)

{
    printf("Numéro 2 : TYPE DYNAMIQUE\n");

}

  else if (typealeatoire ==3)
{
    printf("Numéro 3 : TYPE INTERACTIF\n");


}*/
}
}
