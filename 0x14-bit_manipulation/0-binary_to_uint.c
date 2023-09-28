#include "main.h"
/**
 * binary_to_uint - converts to int
 * @b:value to be used
 * Return:value in base 10
 */

unsigned int binary_to_uint(const char *b)
{
int total = 0;
int len = strlen(b);
int i;
int j = 0;
for (i = len - 1,i >= 0; i--, j++)
{
if (b[i] == '1')
{
total += (1 << j);
}
else if (b[i] != '0')
{
return (0);
}
}
return (total);
}
