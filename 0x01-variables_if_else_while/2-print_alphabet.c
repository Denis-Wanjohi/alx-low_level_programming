#include <stdio.h>
/*
 * main-runs the function
 *
 * the code prinys alphabets in samll letters
 *
 * return (0) success
*/
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
