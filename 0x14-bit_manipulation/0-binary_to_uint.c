#include "main.h"
/*
 * binary_to_unit - converts from binary
 * @x: string to convert
 * Return: the integer in base 10
 */

unsigned int binary_to_uint (char *x)
{

  int lenght = strlen (x);

  int total = 0;

  int position = 0;

  int i;

  for (i = lenght - 1; i >= 0; i--)
    {

      if (x[i] == '1')

	total = total + (1 << position);

      position++;

    }
  return total;

}
