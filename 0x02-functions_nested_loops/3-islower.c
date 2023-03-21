#include "main.h"
#include <ctype.h>
/**
  * _islower - check for lowercase characters
  * @c: character argument
  * Return: 1 if lowercase, 0 if not
  */
int _islower(int c)
{
	if (islower(c) > 0)
		return (0);
	else if (islower(c) == 0)
		return (1);
}
