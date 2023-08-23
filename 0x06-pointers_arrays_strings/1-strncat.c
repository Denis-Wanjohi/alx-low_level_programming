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
char src1 = src[n];
int x = strlen(dest);
dest[x] = src1;
return (dest);
}
