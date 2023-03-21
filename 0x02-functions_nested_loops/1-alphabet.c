#include "main.h"
/**
  * print_alphabet - print lowercase letters
  * Return: void
  */
void print_alphabet(void);

void print_alphabet(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);
	_putchar('\n');
}
