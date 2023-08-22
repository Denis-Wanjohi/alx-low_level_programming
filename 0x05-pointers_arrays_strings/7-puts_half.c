#include <stdio.h> 
#include <string.h>
/**
 *puts2(char *str)-prints half of the string
 *@str:string being used 
*/
void puts2(char *str)
{
int x;
int len=strlen(str);
for (x = (len)/2; x < len; x++)
{
putchar(str[x]);
}
putchar('\n');
}
