#include "variadic_functions.h"

/**
  * print_all - prints anything, any data type
  * @format: list of data types passed in
  * Return: void
  */

void print_all(const char * const format, ...)
{
	char *s;
	char *sptor = "";
	int x = 0;
	va_list list;

	va_start(list, format);

	if (format != NULL)
	{
		while (format[x] != 0)
		{
			/* using switch statement to give each format type its respective format */
			switch (format[x])
			{
				case 'c':
					printf("%s%c", sptor, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sptor, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sptor, va_arg(list, double));
					break;
				case 's':
					s = va_arg(list, char *);
					/* if string is NULL print (nil) */
					if (s == NULL)
						s = "(nil)";
					printf("%s%s", sptor, s);
					break;
				default:
					x++;
					continue;
			}
			sptor = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(list);
}
