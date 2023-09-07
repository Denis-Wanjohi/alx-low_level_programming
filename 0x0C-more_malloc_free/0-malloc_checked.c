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
printf("98\n");
}
return ptr;
}
