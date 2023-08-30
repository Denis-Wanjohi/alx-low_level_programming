#include "main.h"
/**
 * void _print_rev_recursion(char *s)-prints in reverse
 * @s:string being used;
 */

void _print_rev_recursion(char *s)
{
if(*s)
{
_print_rev_recursion(s+1);
putchar(*s);
}
}
