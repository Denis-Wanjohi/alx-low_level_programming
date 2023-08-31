#include "main.h"


/**
 * xValue(int n,int u)-helping function
 * @u:counting value
 * @n:the value
 * Return:1 if prime 0 if not
 */
int xValue(int n, int u)
{
if ((u * u) != n)
{
if ((u * u) > n)
{
if ((n) % 2 == 0 || (n) % 3 == 0 || (n) % 5 == 0)
{
return (0);
}
else
{
return (1);
}
}
return (xValue(n, u + 1));
}
else
{
if ((n) % 2 == 0 || (n) % 3 == 0 || (n) % 5 == 0)
{
return (0);
}
else
{
return (1);
}
}
}
/**
 * is_prime_number(int n)-finds the square root
 * @n:the value
 * Return:the squrae root value
 */
int is_prime_number(int n)
{
int z = xValue(n, 0);
if (n < 2)
{
return (0);
}
return (z);
}
