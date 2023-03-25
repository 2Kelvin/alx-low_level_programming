#include <stdio.h>

/**
 * main - print largest prime factor
 * Return: 0
 */

int main(void)
{
	long num, prime;

	num = 612852475143;
	for (prime = 2; prime < num; prime++)
	{
		while (num % prime == 0)
			num /= prime;
	}

	printf("%lu\n", num);

	return (0);
}
