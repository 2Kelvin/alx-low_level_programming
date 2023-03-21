#include "main.h"
/**
  * print_alphabet_x10 - print the alphabet 10 times
  * Return: void
  */
void print_alphabet_x10(void)
{
	int n = 0;
	char l;

	while (n < 10)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
		n++;
	}
}
