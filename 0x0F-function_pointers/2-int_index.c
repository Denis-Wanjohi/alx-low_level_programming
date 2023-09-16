#include "variadic_functions.h"

/**
  *int_index(int *array, int size, int (*cmp)(int))-breaks down the array
  * @array:the array 
  *@size:size of the array
  *@cmp:pointer
  *Return-return 1 if true 
  */
int int_index(int *array, int size, int (*cmp)(int))
{
if (size <= 0)
{
return (-1);
}
int i,j;
for (i = 0; i < size; i++)
{
j = cmp(array[i]);
if (j == 1)
{
return (i);
}
}
return (-1); 
}
