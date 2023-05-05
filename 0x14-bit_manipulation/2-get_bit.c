#include "main.h"
#include <stdio.h>

/**
  * get_bit - fun returning the value of a bit at a given index
  * @n: number arg
  * @index: index arg
  * Return: value at index (success) or -1 (failure)
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int v;

	/* if err return -1 */
	if (index > 64)
		return (-1);

	v = n >> index;

	return (v & 1);
}
