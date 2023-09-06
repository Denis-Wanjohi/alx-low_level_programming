#include "stdio.h"
#include <stdlib.h>
#include <ctype.h>
/**
  *main-add the arguments
  *@argc:argument counter
  *@argv:argument vectors
  *Return:return 0 with no errors
  */
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("0\n");
return (1);
}
char *arg1 = argv[1];
char *arg2 = argv[2];
for (int i = 0; arg1[i] != '\0'; i++)
{
if (!isdigit((unsigned char)arg1[i]))
{
printf("Error\n");
return (1);
}
}
for (int i = 0; arg2[i] != '\0'; i++)
{
if (!isdigit((unsigned char)arg2[i]))
{
printf("Error\n");
return (1);
}
}
printf("%d\n", atoi(argv[1]) + atoi(argv[2]));
return (0);
}
