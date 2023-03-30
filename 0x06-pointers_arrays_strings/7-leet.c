#include "main.h"

/**
  * leet - encodes a string into 1337
  * @s: parameter string
  * Return: s
  */

char *leet(char *s)
{
	int i, j;
	char *letters = "aAeEoOtTlL";
	char *nums = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
				s[i] = nums[j];

		}
	}

	return (s);
}
