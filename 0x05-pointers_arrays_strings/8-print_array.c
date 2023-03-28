#include "main.h"
#include <stdio.h>

/**
  * print_array - Prints n array elements
  * @a: array
  * @n: number of array elements
  * Return: void
  */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index != (n - 1))
			printf(", ");
	}

	printf("\n");
}
