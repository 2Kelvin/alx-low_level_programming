#include "main.h"

/**
  * _memset - fill memory with character b
  * @s: string parameter
  * @b: character to fill with
  * @int: positive number to print character
  * Return: s
 */

char *_memset(char *s, char b,, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;

	return (s);
}
