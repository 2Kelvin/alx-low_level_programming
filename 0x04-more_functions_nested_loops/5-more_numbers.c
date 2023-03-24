#include "main.h"

/**
  * more_numbers - print 0-14 10 times
  * Return: void
  */

void more_numbers(void)
{
	int t;
	char n;

	for (t = 0; t < 10; t++)
	{
		for (n = '0'; n <= '14'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
