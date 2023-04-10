#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: pointer
 * Return: integer
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int notInt = 0;
	int min = 1;
	int isInt = 0;

	while (s[c])
	{
		if (s[c] == '-')
		{
			min *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			isInt = 1;
			notInt = (notInt * 10) + (s[c] - '0');
			c++;
		}

		if (isInt == 1)
		{
			break;
		}

		c++;
	}

	notInt *= min;
	return (notInt);
}
