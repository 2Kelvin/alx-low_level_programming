#include "main.h"
#include <stdio.h>

/**
  * get_endianness - fun checking the endianness
  * Return: 0 (big endian) or 1 (little endian)
  */

int get_endianness(void)
{
	int e = 1;

	if (*(char *)&e == 1)
		/* return little endian */
		return (1);

	/* return big endian */
	return (0);
}
