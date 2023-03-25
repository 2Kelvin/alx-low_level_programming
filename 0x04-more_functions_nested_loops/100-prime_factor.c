#include <stdio.h>
#include "main.h"

/**
  * main - prints the largest prime factor
  * Return: 0 for success
  */

int main(void)
{
	int primeNum;
	long int x = 612852475143;

	for (primeNum = 2; primeNum > 1; primeNum++)
	{
		while (x % primeNum == 0)
		{
			x = x / primeNum;
		}
	}
	printf("%d", primeNum);
}
