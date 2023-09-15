#include "function_pointers.h"

/**
 * array_iterator(int *array, size_t size, void (*action)(int)-function pointer
 * @array:array
 * @size:size of the array
 * @action:pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
