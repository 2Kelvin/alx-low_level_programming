#include "main.h"

/**
  * puts_half - prints the last half of a string
  * @str: pointer string variable
  * Return: void
  */

void puts_half(char *str)
{
	int stringLength = 0;
	int index = 0;

	while (str[index] != '\0')
	{
		stringLength++;
		index++;
	}

	int n = (stringLength - 1) / 2;

	if (stringLength % 2 != 0)
	{
		int x;

		for (x = n; x < stringLength; x++)
			_putchar(str[x]);
	}
	else
	{
		int y;

		for (y = (stringLength / 2); y < stringLength; y++)
			_putchar(str[y]);
	}
	_putchar('\n');
}
