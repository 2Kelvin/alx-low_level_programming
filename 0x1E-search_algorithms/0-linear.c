#include <stdio.h>

/**
  * linear_search - using the linear search algorithm
  * @array: array to search thro
  * @size: array size
  * @value: value to look for in the array
  * Return: value's index in array or -1 if not found/NULL
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
