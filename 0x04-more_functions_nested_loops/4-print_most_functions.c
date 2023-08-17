#include "main.h"
/**
 * print_most_numbers - prints numbers apart from 2 and 4
 */
void print_most_numbers(void)
{
int x;
for (x = 0; x <= 9; x++)
{
if (x == 2 || x == 4)
{
continue;
}
_putchar(x);
}
_putchar('\n');
}

