#include "main.h"
#include <stdlib.h>
/**
 * create_array(unsigned int size, char c)-creates an array of size size
 * @size:size of the array
 * @c:character being used
 * Return:return the array
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *char_array;
if (size == 0)
{
return (NULL);
}
char_array = (char *)malloc(sizeof(char) * size);
if (char_array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
char_array[i] = c;
}
return (char_array);
}
