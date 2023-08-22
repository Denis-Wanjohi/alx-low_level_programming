#include <stdio.h> 
#include <string.h>
/**
 *puts2(char *str)-prints half of the string
 *@str:string being used 
*/
void puts2(char *str)
{
int x;
int len = strlen(str);
int half = len / 2;
if(len % 2 == 1){
  half = (len - 1) / 2;
}
for (x = half; x < len; x++)
{
putchar(str[x]);
}
putchar('\n');
}
