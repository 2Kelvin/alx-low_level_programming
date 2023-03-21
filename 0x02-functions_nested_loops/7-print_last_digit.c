#include "main.h"
/**
  * print_last_digit - print last digit of a number
  * @x: is the number argument passed
  * Return: lastDigit
  */
int print_last_digit(int x)
{
	int lastDigit = x % 10;

	if (x < 0)
		lastDigit = lastDigit * (-1);
	_putchar((lastDigit + '0'));
	return (lastDigit);
}
