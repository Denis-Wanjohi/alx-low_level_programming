#include "main.h"
#include <string.h>
/**
 * rev_string- funcyion toprint in reverse
 * @s: strimg to be used
 */


void rev_string(char *s)
{
int y;
for (y = (strlen(s))-1;  y >= 0; y--)
{
_putchar(s[y]);
}
_putchar('\n');
}
