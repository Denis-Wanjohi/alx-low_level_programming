#include  "main.h"
#include <ctype.h>
#include <string.h>

/**
 * *string_toupper(char *)-changes to upper case
 * @v-string
 * Return - new string
 */

char *string_toupper(char *v)
{
for(int i=0;i< (strlen(v));i++)
{
v[i]=toupper(v[i]);
}
return v;
}
