#include "main.h"

/**
  * rot13 - encodes a string using rot13
  * @s: string pointer parameter
  * Return: s
  */

char *rot13(char *s)
{
	int g, h;
	char *r = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *w = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (g = 0; s[g] != '\0'; g++)
	{
		for (h = 0; r[h] != '\0`; h++)
		{
			if (r[h] == s[g])
			{
				s[g] = w[h];
				break;
			}
		}
	}
	return (s);
}
