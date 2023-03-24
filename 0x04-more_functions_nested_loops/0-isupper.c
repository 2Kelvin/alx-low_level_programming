#include "main.h"

/**
  * _isupper - checks for uppercase letters
  * @c: parameter
  * Return: 1 if uppercase, 0 if not
  */

int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
		if (c == i)
			return (1);
		else
			return (0);
}
