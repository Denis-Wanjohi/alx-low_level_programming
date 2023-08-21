#include "main.h"
#include <string.h>
/**
 *print_rev - prints in reverse
 *@s : string being used
 */
void print_rev(char *s)
{
int x = strlen(s);
int i;
for (i = x; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
