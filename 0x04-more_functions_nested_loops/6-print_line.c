#include "main.h"

/**
  * print_line - print _ n times
  * @n: times to print character _
  * Return: void
  */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;
		char line = '_';

		for (i = 0; i < n; i++)
			_putchar(line);
		_putchar('\n');
	}
}
