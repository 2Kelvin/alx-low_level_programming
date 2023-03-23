#include "main.h"

/**
  * _isdigit - check if its number 0..9
  * Return: 1 if true 0 is if not
  */

int _isdigit(int c)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (c == i)
			return (1);
		else
			return (0);
	}
}
