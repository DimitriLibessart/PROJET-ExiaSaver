#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int TimerPoint;

int main()
{
TimerPoint = 0;
printf("Cet écran sera actualisé dans quelques secondes ");
while(TimerPoint<=9)
	{
	printf(".");
	fflush(stdout);
	sleep(1);
	TimerPoint++;
	}
TimerPoint=0;
}
