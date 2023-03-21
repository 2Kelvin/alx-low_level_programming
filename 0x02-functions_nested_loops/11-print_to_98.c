#include "main.h"
/** 
  * print_to_98 - print numbers to 98
  * Return: void
  */
void print_to_98(int n)
{
	if (n < 99)
	{
		for (n = n; n <= 98; n++)
		{
			_putchar(n);
			if (n == 98)
				break;
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n > 98)
	{
		for (n = n; n >= 98; n--)
		{
			_putchar(n);
			if (n == 98)
				break;
			_putchar(',');
			_putchar(' ');
		}
	}
}

