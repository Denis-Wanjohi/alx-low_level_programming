#include "main.h"
#include <string.h>
/**
 * *_strcat(char *dest, char *src)- function that combines two strings
 * @dest: string beibg used
 * @src: string being used
 * Return - concatenated string
 */

char *_strcat(char *dest, char *src)
{
int i;
int j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}