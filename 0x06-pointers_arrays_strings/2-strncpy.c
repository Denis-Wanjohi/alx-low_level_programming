#include "main.h"
#include <string.h>
/**
 * *_strncpy(char *dest, char *src, int n)-performs copying
 * @dest: string being used
 * @src: string being used
 * @n: index
 * Return : final string
 */
char *_strncpy(char *dest, char *src, int n)
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
