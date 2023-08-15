#include <stdio.h>
/**
 *main - Prints all combination of single digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
for (x = 0; x < 10; x++)
{
if(x > 0){
putchar(',');
putchar(' ');
}
putchar(x + '0');
}
putchar('\n');
return (0);
}
