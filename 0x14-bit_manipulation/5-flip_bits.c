#include "main.h"
#include <stdio.h>

/**
  * flip_bits - fun no of bits flipped to get from one no to another
  * @n: number 1 arg
  * @m: number 2 arg
  * Return: number of bits flipped
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int b;
	unsigned long int df;

	df = n ^ m;
	b = 0;

	while (df)
	{
		b++;
		df &= (df - 1);
	}

	return (b);
}
