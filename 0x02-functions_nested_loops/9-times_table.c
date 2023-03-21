#include "main.h"
/**
  * times_table - print 9 times table
  * Return: void
  */
void times_table(void)
{
	int a, b, c, d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if (c ==0 && b == 0)
				_putchar(c + '0');
			else if (c > 9)
			{
				d = c % 10;
				c = c / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(c + '0');
				_putchar(d + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
		}
		_putchar('\n');
	}
}
