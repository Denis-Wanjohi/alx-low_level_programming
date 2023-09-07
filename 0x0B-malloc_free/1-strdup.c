#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup(char *str)-duplicates the string
 * @str:string tobe duplicated
 * Return: the duplicated string.
 */
char *_strdup(char *str)
{
char *duplicate;
unsigned int i;
int c = 0;
unsigned int len = 0;
if (str == NULL)
{
return (NULL);
}
while (str[c] != '\0')
{
len++;
c++;
}
duplicate = (char *)malloc(len + 1);
if (duplicate == NULL)
{
return (NULL);
}
for (i = 0; i < len; i++)
{
duplicate[i] = str[i];
}
return (duplicate);
}
