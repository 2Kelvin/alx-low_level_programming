#include "function_pointers.h"

/**
  * print_name - print name using function pointer
  * @name: string pointer
  * @f: function pointer
  * Return: void
  */

void print_name(char *name, void (*f)(char *))
{
	/* checking if a name & function pointer have been passed in */
	if (name == NULL || f == NULL)
		return;

	/* use the function pointer passed in to print any passsed in name */
	f(name);
}
