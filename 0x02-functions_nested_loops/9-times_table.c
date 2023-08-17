#include "main.h"

void times_table()
{
int i;
for (i = 0; i < 10; i++)
{
int j;
for (j = 0;j < 10; j++)
{
int total = i*j;
_putchar(total + '0');
if (j != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
