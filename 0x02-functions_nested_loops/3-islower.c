#include "main.h"
#include <ctype.h>
/**
  * _islower - check for lowercase characters
  * @c: character argument
  * Return: 1 if lowercase, 0 if not
  */
int _islower(int c)
{
	int l = (c + '0');

	if (l >= 97 && l <= 122)
		return (1);
	else
		return (0);
}
