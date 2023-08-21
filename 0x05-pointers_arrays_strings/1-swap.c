#include "main.h"
/**
 * swap_int - swaps *a and *b values
 * @a : to be swapped
 * @b : to be swapped
 */
void swap_int(int *a, int *b)
{
int swap;
swap = *a;
*a = *b;
*b = swap;
}
