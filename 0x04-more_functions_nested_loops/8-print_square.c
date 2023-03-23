#include "main.h"

/**
  * print_square - prints a # square
  * @size: square size parameter
  * Return: void
  */

void print_square(int size)
{
	int t;

	for (t = 0; t < size; t++)
	{
		if (t == (size / 2))
			_putchar('\n');
		else
			_putchar('#');
	}
	_putchar('\n');
}
