#include "main.h"

/**
  * _isdigit - check if its number 0..9
  * @c: int parameter
  * Return: 1 if true 0 is if not
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
