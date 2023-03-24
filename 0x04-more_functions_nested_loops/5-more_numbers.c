#include "main.h"

/**
  * more_numbers - print 0-14 10 times
  * Return: void
  */

void more_numbers(void)
{
	int t, n;

	for (t = 0; t < 10; t++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
