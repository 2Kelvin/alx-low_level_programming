#include "main.h"

/**
 * print_number - prints an integer
 * @n: input integer parameter
 * Return: void
**/

void print_number(int n)
{
	unsigned int l = n;

	if (n < 0)
	{
		_putchar(45);
		l = -l;
	}
	if (l / 10)
	{
		print_number(l / 10);
	}
	_putchar(l % 10 + 48);
}
