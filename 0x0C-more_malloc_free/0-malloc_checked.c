#include "main.h"
#include <stdio.h>

void *malloc_checked(unsigned int b)
{
int *ptr=(int *)malloc(b);
if(ptr == NULL){
    printf("98\n");
}
return ptr;
}
