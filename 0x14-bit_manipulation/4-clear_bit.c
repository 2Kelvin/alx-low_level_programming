#include "main.h"
#include <stdio.h>

/**
  * clear_bit - fun sets the value of a bit at a given index to 0
  * @n: pointer arg
  * @index: index arg
  * Return: 1 (success) or -1 (err)
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int v;
	unsigned long int x;

	/* return error */
	if (index > 64)
		return (-1);

	v = index;

	for (x = 1; v > 0; x *= 2, v--)
		;

	if ((*n >> index) & 1)
		*n -= x;

	return (1);
}
