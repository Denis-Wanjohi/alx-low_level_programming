#include "main.h"
#include <string.h>
/**
 * puts2(char *str)-prints a string halfway
 * @str:string being used
 */
void puts2(char *str)
{

int len = strlen(str);
int x;
for (x = 0; x < len; x++)
{
if (x % 2 == 0)
{
_putchar(str[x]);
}
}
_putchar('\n');
}
