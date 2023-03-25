#include <stdio.h>
#include <math.h>
#include "main.h"

/**
  * main - prints the largest prime factor
  * Return: 0 for success
  */

int main(void)
{
	int i;
	long long maxPrime = -1;
	long long num = 612852475143;

	while (num % 2 == 0)
	{
		maxPrime = 2;
		num /= 2;
	}
	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			maxPrime = i;
			num /= i;
		}
	}
	if (num > 2)
	{
		maxPrime = num;
	}
	return (maxPrime);
}
