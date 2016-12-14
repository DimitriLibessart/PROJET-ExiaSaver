#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(int argc,char *argv[])
{
int TimerPointActualisation=0;
FILE* fichier = NULL;
FILE* date = NULL;

int caractereActuel = 0;

int compteurLigne = 0;

while(TimerPointActualisation < 100)
	{
/* FILE* pbmpoints = NULL;
FILE* pbm0 = NULL;
FILE* pbm1 = NULL;
FILE* pbm2 = NULL;
FILE* pbm3 = NULL;
FILE* pbm4 = NULL;
FILE* pbm5 = NULL;
FILE* pbm6 = NULL;
FILE* pbm7 = NULL;
FILE* pbm8 = NULL;
FILE* pbm9 = NULL; */
time_t crt = time(NULL);
	char buf[15];
 
strftime(buf, sizeof(buf), "%T \n", localtime(&crt));

date = fopen("/home/florian/Documents/modeVeille/date.txt", "r+");

puts(buf);

	if (date !=NULL)
        {
        time_t now= time (NULL);
        struct tm tm_now = *localtime (&now);
        char s_now[sizeof "HH:MM:SS"];
        strftime (s_now, sizeof s_now, "%H:%M:%S", &tm_now);
        fprintf (date,"%s", s_now);
        }

	fclose(date);

//=============================================================================================================================================

	fichier = fopen("/home/florian/Documents/modeVeille/date.txt", "r");
/* pbmpoints = fopen("/home/florian/Documents/pbm/:.pbm"),"r");
pbm0 = fopen("/home/florian/Documents/pbm/0.pbm"),"r");
pbm1 = fopen("/home/florian/Documents/pbm/1.pbm"),"r");
pbm2 = fopen("/home/florian/Documents/pbm/2.pbm"),"r");
pbm3 = fopen("/home/florian/Documents/pbm/3.pbm"),"r");
pbm4 = fopen("/home/florian/Documents/pbm/4.pbm"),"r");
pbm5 = fopen("/home/florian/Documents/pbm/5.pbm"),"r");
pbm6 = fopen("/home/florian/Documents/pbm/6.pbm"),"r");
pbm7 = fopen("/home/florian/Documents/pbm/7.pbm"),"r");
pbm8 = fopen("/home/florian/Documents/pbm/8.pbm"),"r");
pbm9 = fopen("/home/florian/Documents/pbm/9.pbm"),"r"); */
if(TimerPointActualisation<3)
	{

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

	


        } while (compteurLigne < 5 ); // Tant que le compteurLigne est inférieur à 5, la lecture et l'ecriture de l'image continue

	fclose(fichier);
	//=========================================
	printf("Cet ecran sera actualise dans quelques secondes ");
	printf(".");
	fflush(stdout);
	sleep(1);
	TimerPointActualisation++;
	}
	else
	{
	TimerPointActualisation=0;
	}
	}
}
}
