#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat(char *s1, char *s2, unsigned int n)-string concatination
 * @s1:string being used
 * @s2:string being used
 * @n:number of characters to concatinate
 * Return: concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i=0;
int j=0;
int x;
int total_len=0;
int s2len=0;
char *final;
while (s1[i]! = '\0')
{
i++;
}
while (s2[s2len] != '\0')
{
s2len++;
}
x = i;
total_len = i + n;
final = (char *)malloc(total_len);
if (final == NULL)
{
return (NULL);
}
for (i = 0; i < x; i++)
{
final[i] = s1[i];
}
final[i] = '\0';
if (s2len < n)
{
while (s2[j]! = '\0')
{
final[i] = s2[j];
i++;
j++;
}
}
else
{
while (j < n)
{
final[i] = s2[j];
i++;
j++;
}
}
final[i] = '\0';
return (final);
}
