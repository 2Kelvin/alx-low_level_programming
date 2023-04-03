#include "main.h"

/**
  * _memset - fill memory with character b
  * @s: string parameter
  * @b: character to fill with
  * @int: positive number to print character b
  */

char *_memset(char *s, char b,, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
