#include "main.h"
#include <string.h>
void puts2(char *str)
{

int len = strlen(str);
int x;
for ( x = 0; x < len); x++)
{
if( x%2 == 0)
{
_putchar(str[x]);
}
}
}
