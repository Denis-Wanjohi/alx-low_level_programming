#include "main.h"
#include <string.h>
/**
 *print_rev - prints in reverse
 *@s : string being used
 */
void print_rev(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;   }
s--;
for (int i = length; i > 0; i--)
{
putchar(*s);
s--;
}
putchar('\n');
}
