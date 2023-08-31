#include "main.h"

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
return xValue(n, u + 1);
}
else
{
if ((n) % 2 == 0 || (n) % 3 == 0 || (n) % 5 == 0)
{
return 0;
}
else
{
return 1;
}
}
}
int is_prime_number(int n)
{
int z = xValue(n, 0);
if (n < 2)
{
return (0);
} 
return (z);
}
