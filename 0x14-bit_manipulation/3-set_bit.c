#include "main.h"
#include <stdio.h>

/**
  * set_bit - fun that sets value of a bit at a given index to 1
  * @n: pointer arg
  * @index: index arg
  * Return: 1 (success) or -1 (error)
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	/* return error */
	if (index > 64)
		return (-1);

	for (x = 1; index > 0; index--, x *= 2)
		;

	*n += x;

	return (1);
}
