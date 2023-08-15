#include <stdio.h>
/**
 *main - Prints the numbers to base 16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
for (x = 0; x < 10; x++)
{
putchar(x + '0');
}
char letter;
for (letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}i
