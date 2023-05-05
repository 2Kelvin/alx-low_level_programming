#include "main.h"
#include <stdio.h>

/**
  * print_binary - fun printing a binary of the number n arg
  * @n: number arg to convert to binary
  * Return: void
  */

void print_binary(unsigned long int n)
{
	int f;
	unsigned long int holdT;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (holdT = n, f = 0; (holdT >>= 1) > 0; f++)
		;

	for (; f >= 0; f--)
	{
		if ((n >> f) & 1)
			printf("1");
		else
			printf("0");
	}
}
