#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <string.h>


int main (int argc , char *argv[]) 
{
system("clear");

int typealeatoire;
int choix=0;
if (strcmp(argv[1], "-stats") == 0)
{
printf("                                 -Voici L'historique-\n\n\n");
printf("                                      -Menu-\n\n\n");
printf("                             1:Historique du type statique\n");
printf("                             2:Historique du type dynamique\n");
printf("                             3:Historique du type interactif\n");
printf("                  Veuillez choisir entre 1 et 3 pour voir les Historiques\n");
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
         
} 
}

else {

int Aleatoire (int _iMin, int _iMax)   // random 
{
           srand (time (NULL));
            return (_iMin + (rand () % (_iMax-_iMin+1)));
}

typealeatoire = Aleatoire(1,3); //initialisé les 3 choix possibles

  if (typealeatoire ==1) //si le random arrive sur 1
{
    printf("Numéro 1 : TYPE STATIQUE\n");

}
 else if (typealeatoire ==2)

{
    printf("Numéro 2 : TYPE DYNAMIQUE\n");

}
  else if (typealeatoire ==3)
{
    printf("Numéro 3 : TYPE INTERACTIF\n");

}
}



}


