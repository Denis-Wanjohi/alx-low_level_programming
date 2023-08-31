#include "main.h"

/**
 * _sqrt_recursion(int n)-finds the square root
 * @n:the value
 * Return:the squrae root value
 *
 */
int xValue(int n,int u)
{
if ((u * u) != n)
{
if((u*u) > n)
{
return (-1);
}   
return xValue(n, u + 1);   
}
if ((u*u) == n)
{  
return (u);
}
}
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
} 
int z=xValue(n,0);    
return (z);
}
