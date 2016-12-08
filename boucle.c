#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int TimerPoint;

int main()
{
TimerPoint = 0;
printf("Cet écran sera actualisé dans quelques secondes ");
printf("\nTimerPoint = %d\n",TimerPoint);
while(TimerPoint<=9)
	{
	printf(".");
	sleep(1);
	TimerPoint++;
	printf(".");
	}

TimerPoint=0;

}
