#include <stdio.h>

/**
  * binary_search - using binary search algorithm
  * @array: array to search through
  * @size: array size
  * @value: value to look for in array
  * Return: index where value is found or -1 if not found
  */
int binary_search(int *array, size_t size, int value)
{
	int l, r, half, i;

	if (!array)
		return (-1);
	l = 0;
	r = size - 1;
	while (l <= r)
	{
		half = (l + r) / 2;
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
			printf("%i%s", array[i], i == r ? "\n" : ", ");
		if (array[half] < value)
			l = half + 1;
		else if (array[half] > value)
			r = half - 1;
		else
			return (half);
	}
	return (-1);
}
