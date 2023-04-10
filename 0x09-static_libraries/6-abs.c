#include "main.h"
/**
  * _abs - priint the absolute value
  * @x: int argument
  * Return: x
  */
int _abs(int x)
{
	if (x < 0)
		x = x * (-1);
	else
		x = x;
	return (x);
}
