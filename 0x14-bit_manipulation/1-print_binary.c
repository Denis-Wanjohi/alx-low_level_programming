#include "main.h"
/**
 * print_binary - prints binary value 
 * @n: value being used
 */
void print_binary(unsigned long int n)
{
if (n > 1)
{
printBinary(n >> 1);
}
printf("%d", n & 1);
}
