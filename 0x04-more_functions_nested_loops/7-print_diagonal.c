#include "main.h"

/**
  * print_diagonal - print \ diagonally
  * @n: n times
  * Return: void
  */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		char space = ' ';
		char slash = '\\';
		int i, s;

		for (i = 0; i < n; i++)
		{
			for (s = 0; s < i; s++)
				_putchar(space);
			_putchar(slash);
			_putchar('\n');
		}
	}
}
