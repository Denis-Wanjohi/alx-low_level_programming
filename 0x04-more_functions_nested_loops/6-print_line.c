#include "main.h"
/**
 * print_line- prints series of characters forming a line
 * @n: the character to be printed
 * return - always show the success
 */

void print_line(int n)
{
if (n == 0)
{
_putchar('\n');
}
else
{

int x;
for (x = 0; x <= n; x++)
{
_putchar('_');
}
}
_putchar('\n');
return (0);
}

