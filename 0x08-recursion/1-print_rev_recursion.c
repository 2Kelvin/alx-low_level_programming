#include "main.h"

/**
  * _print_rev_recursion - print a string in reverse using recursion
  * @s: string parameter
  * Return: void
  */

void _print_rev_recursion(char *s)
{
	/* if we're not at the end of the string */
	/* or the string is not empty */
	if (*s != '\0')
	{
		/* loop through all the string chars using pointer notation */
		_print_rev_recursion(s + 1);
		/* unwind recursion to the start while printing the char at each location */
		_putchar(*s);
	}
}
