#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char  small_letter='a';
while(small_letter <='z')
{
putchar(small_letter);
small_letter++;
}
char  capital_letter='A';
while(capital_letter <='Z')
{
putchar(capital_letter);
capital_letter++;
}
putchar('\n');
}
