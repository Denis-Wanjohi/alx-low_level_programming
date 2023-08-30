#include "main.h"

/**
 * _strlen_recursion(char *s)-gets the length
 * @s:string being  used
 * Return: gives the lenght
 */

int _strlen_recursion(char *s)
{
int x = 0;
if (*s)
{
x++;
x += _strlen_recursion(s + 1);
}
return (x);
}
