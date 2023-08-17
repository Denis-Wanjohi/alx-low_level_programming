#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void jack_bauer_day()
{
    for (int hour = 0; hour < 24; hour++)
    {
        for (int minute = 0; minute < 60; minute++)
       	{
            printf("%02d:%02d\n", hour, minute);
            sleep(60);
        }
    }
}
