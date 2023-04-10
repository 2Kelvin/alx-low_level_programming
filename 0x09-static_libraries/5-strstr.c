#include <stdio.h>

/**
  * _strstr - locate a substring in a another string
  * @haystack: main string
  * @needle: substring
  *Return: location of substring or NULL
  */

char *_strstr(char *haystack, char *needle)
{
	int h, n;

	for (h = 0; haystack[h] != '\0'; h++)
	{
		for (n = 0; needle[n] != '\0'; n++)
		{
			if (haystack[h + n] != needle[n])
				break;
		}

		if (!needle[n])
			return (&haystack[h]);
	}

	return (NULL);
}
