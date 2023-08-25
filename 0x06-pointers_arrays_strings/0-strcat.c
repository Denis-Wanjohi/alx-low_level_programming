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
while (dest != '\0'){
dest++;
}
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
