#include <stdio.h>
/**
  * main - prints the sum of multiples of 3 and 5
  * Return: 0
  */
int main(void)
{
	int n, sum;

	sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 || n % 5)
			sum += n;
	}
	printf("%d\n", sum / 2);
	return (0);
}
