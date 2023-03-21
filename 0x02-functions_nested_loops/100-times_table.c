#include "main.h"
/**
  * print_times_table - print n times table
  * return: void
  * @n: argument number passed to function
  */
void print_times_table(int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		_putchar((n * index));
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
