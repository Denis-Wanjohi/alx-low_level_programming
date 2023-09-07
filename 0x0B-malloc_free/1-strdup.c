#include <stdlib.h>
#include <stdio.h>



char *_strdupl(char *str)
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
duplicate = (char *)malloc(len+1);
for (i = 0; i < len; i++)
{
duplicate[i]=str[i];
}
return (duplicate);
}
