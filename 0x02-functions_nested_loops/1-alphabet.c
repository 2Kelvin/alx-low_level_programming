#include "main.h"
/**
  * main - print lowercase alphabet
  * Return: 0
  */
void print_alphabet(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);
	putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
