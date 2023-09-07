#include "main.h"
#include <stdio.h>
/**
 * malloc_checked(unsigned int b)-chekes memory allocation 
 * @b:the size 
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
char *ptr = malloc(b);
if(ptr == NULL){
exit(98);
}
return (ptr);
}
