#include <stdio.h>
#include <stdlib.h>
/**
  *main-finds the cents
  *@argc:argument counter
  *@argv:argument vectors
  *Return:return 0 with no errors
  */

int main (int argc,char *argv[])
{
int num;
int cent;
if(argc != 2)
{
printf("Error\n");
return (1);
}
num = atoi(argv[1]);
if (num < 0)
{
printf("0\n");
}
else
{
cent = 0;
while (num >= 25)
{
num = num - 25;
cent++;
}
while (num >= 10)
{
num = num - 10;
cent++;
}
while (num >= 5)
{
num = num - 5;
cent++;
}
while (num >= 2)
{
num = num - 2;
cent++;
}
while (num >= 1)
{
num = num - 1;
cent++;
}
printf("%d\n", cent);
}
return (0);
}
