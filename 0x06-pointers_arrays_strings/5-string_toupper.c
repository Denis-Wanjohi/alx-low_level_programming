#include  "main.h"
/**
 * *string_toupper(char *)-changes to upper case
 * @*-string
 * Return - new string
 */

char *string_toupper(char *)
{
int x = strlen(*);
char str[x];
int i;
for (i = 0; i < x; i++)
{
str[i] = toupper(*[i]);
}
putchar('\n');
return (str);


}
