#include <stdio.h>

/**
  * main - print sum of Fibonacci even numbers
  * Return: 0
  */

int main(void)
{
	long int f = 1;
	long int s = 2;
	long int i;
	long int evenSum = 0;

	for (i = 0; f < 4000000; i++)
	{
		if (!(f % 2))
			evenSum += f;
		s = f + s;
		f = s - f;
	}
	printf("%ld\n", evenSum);
	return (0);
}
