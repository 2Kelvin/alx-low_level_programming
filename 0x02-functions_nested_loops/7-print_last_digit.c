#include "main.h"
/**
  * print_last_digit - print last digit of a number
  * @x: is the number argument passed
  * Return: lastDigit
  */
int print_last_digit(int x)
{
	int lastDigit = x % 10;

	_putchar(lastDigit);
	_putchar('\n');
	return (lastDigit);
}
