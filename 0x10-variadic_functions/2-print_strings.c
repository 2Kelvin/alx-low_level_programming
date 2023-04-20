#include "variadic_functions.h"

/**
  * print_strings - print strings separated by the separator passed in
  * @separator: string separator
  * @n: number of strings passed in as arguments
  * Return: void
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x = 0;
	char *s;
	va_list list;

	va_start(list, n);
	while (x < n)
	{
		s = va_arg(list, char *);
		/* if the string is NULL, print (nil) */
		if (s == NULL)
			s = "(nil)";
		/* if separator is NULL, don't print it */
		if (separator == NULL)
			printf("%s", s);
		/* don't print a separator at the start of the line */
		else if (separator != NULL && x == 0)
			printf("%s", s);
		else
			printf("%s%s", separator, s);
	}
	printf("\n");
	va_end(list);
}
