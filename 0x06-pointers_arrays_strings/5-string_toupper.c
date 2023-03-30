#include "main.h"

/**
  * string_toupper - changes all letters from lowercase to uppercase
  * @s: string parameter
  * Return: uppercase string
  */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] -32;
	}

	return (s);
}
