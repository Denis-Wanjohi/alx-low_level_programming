#include "main.h"
#include <string.h>
/**
 * *_strncat(char *dest, char *src, int n)-function that combines string with condition
 * @dest:string being used
 * @src:string being used
 * @n:the index used
 * Return: the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
int j;
j = 0;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
