#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int main(int argc, char *argv[])
//fonction pour ouvrir le fichier 
{  
	FILE* fichier = NULL; //on ne donne pas de valeur a notre fichier qui sera le fichier txt
	fichier = fopen("historique.txt","a+"); //on demande au systéme d'ouvrir le fichier historique.txt
	if (fichier !=NULL)
	{
	}
	else 
	{
	printf("impossible d'ouvrir le fichier txt\n");  //on demande d'écrire ce message sur la console si le fichier ne s'ouvre pas 
	}
		//fonction pour ecrire dans le fichier
		if (fichier !=NULL)
		{
		time_t now= time (NULL); //permet de recuperer l'heure actuelle (présent dans la biblio <time.h>)
 		struct tm tm_now = *localtime (&now); //permet de convertir l'heure en heure locale (du pc) (présent dans la biblio <time.h>
		char s_now[sizeof "JJ/MM/AAAA HH:MM:SS"]; //on crée une chaine pour gerer la disposition de l'heure dans le fichier
		strftime (s_now, sizeof s_now, "%d/%m/%Y %H:%M:%S", &tm_now); 
		fprintf (fichier,"%s ecran choisi aléatoirment", s_now); //on écrit le resultat dans le fichier ouvert précédement (historique.txt)
		}

			//fonction pour fermer et ouvrir le fichier 
			if(fichier !=NULL)
			{ 
				fprintf(fichier, "...\n"); //pour affichier le type d'écran
				fclose(fichier);
			}
			else //sinon
			{ 
				printf("le fichier ne peut pas se fermer\n"); 
			}
			

			
return 0;
}	
