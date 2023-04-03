#include <stdio.h>

/**
  * print_diagsums - prints the sum of two square diagonals
  * @a: parameter 1
  * @size: parameter 2
  * Return: void
  */

void print_diagsums(int *a, int size)
{
	int index;
	int sqSum = 0;
	int sqSum1 = 0;

	for (index = 0; index < size; index++)
	{
		sqSum = sqSum + a[(size + 1) * index];
		sqSum1 = sqSum1 + a[(size - 1) * (index + 1)];
	}

	printf("%d, %d\n", sqSum, sqSum1);
}
