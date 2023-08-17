#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void jack_bauer_day(void)
{
	int hour;
    for (hour = 0; hour < 24; hour++)
    {
	    int minute;
        for (minute = 0; minute < 60; minute++)
       	{
            printf("%02d:%02d\n", hour, minute);
            sleep(60);
        }
    }
}
