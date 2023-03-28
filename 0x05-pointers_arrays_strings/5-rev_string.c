#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char b;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		b = s[i];
		s[i++] = s[len];
		s[len] = b;
	}
}
