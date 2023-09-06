#include "stdio.h"
#include <stdlib.h>
#include <ctype.h>
/**
  *main-adds the arguments
  *@argc:argument counter
  *@argv:argument vectors
  *Return:return 0 with no errors
  */
int main(int argc, char *argv[])
{
if (argc <= 1)
{
printf("0\n");
return (1);
}
for (int r = 1; r <= argc - 1; r++)
{
char *arg1 = argv[r];
for (int i = 0; arg1[i] != '\0'; i++)
{
if (!isdigit((unsigned char)arg1[i]))
{
printf("%c\n", arg1[i]);
printf("Error\n");
return (1);
}
}   
}

int total = 0;
int num;
for (num = 1; num <= argc; num++)
{
total = total + atoi(argv[num]);
}
printf("%d\n", total);
return (0);
}
