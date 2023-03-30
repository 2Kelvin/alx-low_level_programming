#include "main.h"

/**
  * reverse-array - reverse order of array elements
  * @a: array parameter
  * @n: array elements number parameter
  * Return: void
  */

void reverse_array(int *a, int n)
{
	int i, newArr;

	for (i = 0; i < n / 2; i++)
	{
		newArr = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = newArr;
	}
}
