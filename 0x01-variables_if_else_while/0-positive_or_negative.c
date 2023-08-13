#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * checks is positive or nrgative
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n>0){
printf("%d\t is positive",n);
}else if(n==0){
printf("%d\t is zero",n);
}else{
printf("%d\t is negative",n);
}
return 0;
}
