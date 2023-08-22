#include "main.h"

void puts2(char *str)
{
int x;
for ( x = 0; x < strlen(str); x++)
{
if( x%2 == 0)
{
_putchar(str[x]);
}
}
}
