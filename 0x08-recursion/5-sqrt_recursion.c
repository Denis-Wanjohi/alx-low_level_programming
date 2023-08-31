#include "main.h"

/**
 * _sqrt_recursion(int n)-finds the square root
 * @n:the value
 * Return:the squrae root value
 *
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
int x = 0;
while ((x * x) != (n))
{
if ((x * x) > n)
{
return (-1);
}
x++;
}
return (x);
}
