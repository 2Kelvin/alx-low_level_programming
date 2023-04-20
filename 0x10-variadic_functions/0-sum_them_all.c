#include "variadic_functions.h"

/**
  * sum_them_all - sums up all function args
  * @n: argument count
  * Return: sum of args
  */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int x = 0;
	va_list list;

	va_start(list, n);
	while (x < n)
	{
		sum += va_arg(list, int);
		x++;
	}
	va_end(list);

	return (sum);
}
