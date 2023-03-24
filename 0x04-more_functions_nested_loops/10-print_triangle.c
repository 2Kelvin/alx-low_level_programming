#include "main.h"

/**
  * print_triangle - print a triangle
  * @size: parameter
  * Return: void
  */
void print _triangle(int size)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int l, w, h;

		for (a = 0; a < size; a++)
		{
			for (b = size - a; b > 1; b--)
				_putchar(' ');
			for (c = 0; c <= a; c++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
