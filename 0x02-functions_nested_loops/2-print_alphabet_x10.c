#include "main.h"
/**
  * print_alphabet_x10 - print the alphabet 10 times
  * Return: void
  */
void print_alphabet_x10(void)
{
	int x = 0;
	char i;

	while (x < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
