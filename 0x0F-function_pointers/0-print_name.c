#include "function_pointers.h"

/**
  * print_name - print name using function pointer
  * @name: string pointer
  * @f: function pointer
  * Return: void
  */

void print_name(char *name, void (*f)(char *))
{
	/* use any function pointer passed in to print any passsed in name */
	f(name);
}
