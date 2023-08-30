#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion(char *s)-prints the strings
 * @s:the string
 * 
 */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
{
_putchar('\0');
}
}
