#include "main.h"
/**
 * binary_to_uint - convert to int
 * @b: value being used
 * Return: the int value
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int f = 0;
int length = 0;
int i;
if (b == NULL )
{
return (0);
}
while (b[f] != '\0')
{
length++;
f++;
}      
for (i = 0; i < length; i++)
{
if (b[i] == '1')
{
result = (result << 1) | 1;
}
else if (b[i] == '0')
{
result = (result << 1);
}
else
{
return (0);
}
}
return (result);
}
