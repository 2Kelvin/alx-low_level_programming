#include "main.h"

/**
  * print_diagonal - print \ diagonally
  * @n: n times
  * Return: void
  */

void print_diagonal(int n)
{
	char space = ' ';
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(i(space));
			_putchar('\');
			_putchar('\n');
		}
	}
}
