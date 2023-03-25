#include <stdio.h>
#include "main.h"

/**
 * main - print largest prime number
 * Return: 0
 */

int main(void)
{
	unsigned long int num = 612852475143;
	unsigned long int primeNum;

	primeNum = 3;
	while (primeNum < num / 2)
	{
		if ((num % primeNum) == 0)
		{
			if((primeNum % 3) == 2)
				printf(",%lu ", primeNum);
		}

		primeNum += 2;
	}

	_putchar('\n');
	return (0);
}
