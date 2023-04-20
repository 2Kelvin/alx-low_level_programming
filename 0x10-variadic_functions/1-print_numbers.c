#include "variadic_functions.h"

/**
  * print_numbers - prints numbers with separated by the separator passed in
  * @separator: separator
  * @n: number of integers passed in
  * Return: void
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x = 0;
	va_list list;

	va_start(list, n);
	while (x < n)
	{
		/* if separator is NULL don't print it */
		if (separator == NULL)
			printf("%d", va_arg(list, int));
		/* don't print a separator at the start of the line */
		else if (separator != NULL && x == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
		x++;
	}
	va_end(list);
	printf("\n");
}
