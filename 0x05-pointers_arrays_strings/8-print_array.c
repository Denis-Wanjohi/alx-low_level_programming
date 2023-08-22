#include "main.h"
#include <stdio.h>
/**
 *print_array:display array content
 * @a: the array
 * @n : size of the array
 *  Return: a and n inputs
 */
void print_array(int *a, int n)
{
int x;

for (x = 0; x < n; x++)
{
printf("%d", a[x]);
if (x == (n - 1))
{
break;
}
printf(", ");
}
printf("\n");
}
