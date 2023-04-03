#include <stdio.h>

/**
  * _strpbrk - search for any set of bytes in a string
  * @s: parameter string 1
  * @accept: parameter string 2
  * Return: s
  */

char *_strpbrk(char *s, char *accept)
{
	int g, h;

	for (g = 0; *s != '\0'; g++)
	{
		for (h = 0; accept[h] != '\0'; h++)
		{
			if (*s == accept[h])
				return (s);
		}
		s++;
	}

	return (NULL);
}
