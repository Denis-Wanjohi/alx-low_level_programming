#include "function_pointers.h"
#include <stdio.h>

/**
  *int_index(int *array, int size, int (*cmp)(int))-breaks down the array
  * @array:the array 
  *@size:size of the array
  *@cmp:pointer
  *Return-return 1 if true 
  */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
