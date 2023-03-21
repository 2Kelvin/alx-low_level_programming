#include "main.h"
#include <stdio.h>
/** 
  * print_to_98 - print numbers to 98
  * @n: passed number argument
  * Return: void
  */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
				break;
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
				break;
			_putchar(',');
			_putchar(' ');
		}
	}
	else
		printf("%d", n);
	_putchar('\n');
}

