


int centre(void)
{
char v=0;
	char b=0;
	int L=0;
	int C=0;
	int col=0;
	int lin=0;
	int o=0;
	while (v!='\0')
        {
        while (b!='\n')
            {
            b= fgetc(fichier);
            C++;
            }
        v= fgetc(fichier);//peut etre pas besoin
        L++;
        b=0;
        }
    col=(80-C)/2;
    lin=(80-L)/2;
    for (o=80*lin+col+1; o<=80*24-(80*lin+col+1); o++)
        {
        v=0;
	v= fgetc(fichier);	
	tableau1[o]=v;	
	if (o%80==79-col)
            {
            o+=C+1;
            }
        }
return 0;
}



