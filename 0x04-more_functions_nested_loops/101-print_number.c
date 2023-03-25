#include "main.h"

/**
  * print_number - prints an integer
  * @int: parameter
  * Return: void
  */

void print_number(int c)
{
	unsigned int l = c;

	if (c < 0)
	{
		_putchar('-');
		l = -l;
	}
	if (l / 10)
		print_number(l / 10);

	_putchar((l % 10) + '0');
}
