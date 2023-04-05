#include "main.h"

/**
  * _puts_recursion - recreating puts function in recursion
  * @s: string pointer parameter
  * Return: void
  */

void _puts_recursion(char *s)
{
	/* if you're at the end of the string */
	/* or the string passed is empty */
	/* print a new line and end the loop */

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	/* otherwise, print the first character in the string */
	_putchar(*s);
	/* then move to the next char & print it */
	/* redo this action till you print them all */
	_puts_recursion(s + 1);
}
