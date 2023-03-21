#include "main.h"
/**
  * main - print last digit of anumber
  * Return: lastDigit
  */
int print_last_digit(int x)
{
	lastDigit = x % 10;
	_putchar(lastDigit);
	_putchar('\n');
	return lastDigit;
}
