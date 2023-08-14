#include <stdio.h>
int main (void)
{
for (ch = 'a';ch <= 'z';ch++)
{
if (ch == 'e' || ch == 'q')
{
continue;
}
putchar(ch)
}
