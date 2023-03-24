#include "main.h"

/**
  * print_line - print _ n times
  * @n: times to print character _
  * Return: void
  */

void Print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 0; i < n; i++)
			_putchar(95);
		_putchar('\n');
	}
}
