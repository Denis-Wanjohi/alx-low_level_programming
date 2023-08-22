#include "main.h"
#include <stdio.h>
/**
 *print_array:display array content
 * @a: the array
 * @n : size of the arrya
 */
void print_array(int *a, int n)
{
int x;

for (x = 0; x <= n; x++)
{
printf("%d",a[x]);
printf("\' ");
}
printf('\n');
}
