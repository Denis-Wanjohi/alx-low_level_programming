#include "main.h"
#include <stdio.h>
/**
 * malloc_checked(unsigned int b)-chekes memory allocation 
 * @b:the size 
 * 
 */
void *malloc_checked(unsigned int b)
{
int *ptr = (int *)malloc(b);
if(ptr == NULL){
exit(98);
}
return (ptr);
}
