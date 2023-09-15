#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

int sum_them_all(const unsigned int num, ...)
{
unsigned int i;
unsigned int results = 0;

if(num == 0)
{
return 0;
}
va_list args;
va_start(args,num);
for (i = 0; i < num; i++)
{
results += va_arg(args,int);

}
va_end(args);
_putchar('\n');
return results;
}
