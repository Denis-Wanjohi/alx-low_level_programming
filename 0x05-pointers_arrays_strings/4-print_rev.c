#include "main.h"
#include <stdio.h>
/**
 *print_rev - prints in reverse
 *@s : string being used
 */
void print_rev(char *s)
{
int x = strlen(s);

for (i = x; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');

}
