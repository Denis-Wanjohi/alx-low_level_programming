#include "main.h"

/**
 * xValue(int n,int u)-helping function
 * _sqrt_recursion(int n)-finds the square root
 * @u:counting value
 * @n:the value
 * Return:the squrae root value
 *
 */
int xValue(int n, int u)
{
if ((u * u) != n)
{
if ((u * u) > n)
{
return (-1);
}
return (xValue(n, u + 1));
}
if ((u * u) == n)
{
return (u);
}
return (u);
}
/**
 * _sqrt_recursion(int n)-finds the square root
 * @n:the value
 */
int _sqrt_recursion(int n)
{
int z = xValue(n, 0);
if (n < 0)
{
return (-1);
}
return (z);
}
