#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


int sum_them_all(const unsigned int num, ...)
{
int i;
int results = 0;

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
return results;
}
