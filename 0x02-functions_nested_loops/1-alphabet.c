#include "main.h"
/**
 * print alphabet in lower case
 */
void print_alphabet(void)
{
char letter;
while (letter < 'z')
{
	_putchar(letter);
	letter++;
}
_putchar('\n');
}
