#include "main.h"
/**
 * reverse_array(int *a, int n)-reverse
 * @a:string
 * @n:size of string
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
