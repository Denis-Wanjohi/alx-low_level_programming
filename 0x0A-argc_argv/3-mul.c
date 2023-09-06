#include "stdio.h"
#include <stdlib.h> 

int main (int argc, char *argv[])
{
int x = atoi(argv[1]);
int y = atoi(argv[2]);
if (argv[1] == NULL || argv[2] == NULL)
{
printf("%s\n", "Error");
return (1);
}
else
{
int z = x * y;
printf("%d\n", z);  
}
return (0);
}
