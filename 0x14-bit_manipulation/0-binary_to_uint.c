#include "main.h"
#include <stdio.h>

/**
  * binary_to_uint - fun convert binary no to an unsigned int
  * @b: binary arg
  * Return: unsigned int of b
  */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int tt;
	unsigned int pw;

	/* checking if a binary no was passed in */
	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		/* checking if it's a binary no */
		/* should only contain 1s and 0s */
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}

	for (tt = 0, pw = 1, i--; i >= 0; i--, pw *= 2)
	{
		if (b[i] == '1')
			tt += pw;
	}

	return (tt);
}
