#include "main.h"
/**
 * print_alphabet_x10- print all alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
int x = 1;
while (x <= 10)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
x++;
}
}
