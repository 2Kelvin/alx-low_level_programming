#include "main.h"
#include <ctype.h>
/**
  * _islower - check for lowercase characters
  * @c: character argument
  * Return: 0
  */
int _islower(int c)
{
	int asciiLetter = (c + '0');

	if ((isLower(asciiLetter) > 0))
		return (1);
	else
		return (0);
}
