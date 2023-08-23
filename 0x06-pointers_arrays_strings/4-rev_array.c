#include "main.h"
/**
 * reverse_array(int *a, int n)-reverse
 * @a:string
 * @n:size of string
 */

void reverse_array(int *a, int n)
{
int i;
int j=n;
int new[j];
for(i=-1;i<n;i++)
{
new[j]=a[i];
j--;
}
int z;
z = 0;
while (z < n)
{
if (z != 0)
{
printf(", ");
}
printf("%d", new[z]);
z++;
}
printf("\n");
}
