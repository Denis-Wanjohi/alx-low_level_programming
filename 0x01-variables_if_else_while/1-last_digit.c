#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/** main-Determine the last value and if its 0 or more or less than 5.
 * Return: 0(Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if ((n%10) > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, abs(n%10));
}
else if (abs(n%10) == 0)
{
printf("Last digit of %d is %d and is 0\n", n, abs(n%10));
}
else if (abs(n%10) > 0 && abs(n%10) < 6)
{
printf("Last dig `it of %d is %d and is less than 6 and not 0\n", n,abs(n%10));
}
return (0);
}