#include "main.h"

/**
  * cap_string - capitalize 1st letter of each word
  * @str: string parameter
  * Return: capitalized string
  */

char *cap_string(char *str)
{
	int i = 0;
	int j = 0;
	char specialChars[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		while (specialChars[j] != '\0')
		{
			if (specialChars[j] == str[i] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
			j++;
		}
		i++
	}

	return (str);
}
