#include <stdio.h>
/**
  * main - print numbers in the base of 16
  * Return: 0
  */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
		putchar((i %x));

	putchar('\n');
	return (0);
}
