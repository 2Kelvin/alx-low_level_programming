#include "main.h"

/**
  * print_line - print _ n times
  * @n: times to print character _
  * Return: void
  */

void Print_line(int n)
{
	char line = '_';

	if (n <= 0)
		_putchar('\n');
	else
	{
		_putchar(n(line));
		_putchar('\n');
	}
}
