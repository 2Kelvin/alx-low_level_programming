#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: the string to change the first letter of a word in uppercase
 * Return: capitalizes letters
 */
char *cap_string(char *str)
{
	int i = 0;
	int j = 0;
	char specialChars[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};

	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		while (specialChars[j] != '\0')
		{
			if (specialChars[j] == str[i] && (str[i + 1] >= 97 && str[i + 1] <= 122))
			{
				str[i + 1] = str[i + 1] - 32;
			}
			j++;
		}
		i++;
	}
	return (str);
}
