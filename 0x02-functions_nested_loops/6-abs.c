#include "main.h"
/**
  * main - priint the absolute value
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
