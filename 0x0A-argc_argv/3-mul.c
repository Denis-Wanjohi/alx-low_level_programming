#include "stdio.h"
#include <stdlib.h>
/**
  *main-multiply the arguments
  *@argc:argument counter
  *@argv:argument vectors
  *Return:return 0 with no errors
  */
int main (int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
}
return (0);
}
