#include <stdio.h>

/**
 * main - prints the largest prime factor 
 * Return: 0 for success
**/

int main(void)
{
	long int i;
	long long int num;

	num = 612852475143;

	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			if (num == i)
			{
				printf("%ld\n", i);
				break;
			}
			num /= i;
			i = 1;
		}
	}
	return (0);
}
