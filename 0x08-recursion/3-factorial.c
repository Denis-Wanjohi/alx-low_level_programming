#include "main.h"
/**
 * factorial (int n)-gets the factorial
 * @n:the value;
 * Return: value if positive and -1 if n is -ve
 */

int factorial(int n)
{
if (n > 0)
{
n *= factorial(n - 1);
}
else if (n == 0)
{
return (1);
}
else
{
return (-1);
}
return (n);
}
