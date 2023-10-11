#include <stdio.h>

int binary_search(int *array, size_t size, int value);
int bSearch(int *array, size_t start, size_t end, int value);
void arrayPrint(int *array, size_t start, size_t end);

/**
  * binary_search - using binary search algorithm
  * @array: array to search through
  * @size: array size
  * @value: value to look for in array
  * Return: index where value is found or -1 if not found
  */
int binary_search(int *array, size_t size, int value)
{
	return (bSearch(array, 0, size - 1, value));
}

/**
  * bSearch - actual binary search & array splitting
  * @array: array
  * @start: array left
  * @end: array right
  * @value: value
  * Return: index or -1
  */
int bSearch(int *array, size_t start, size_t end, int value)
{
	int half;

	if (!array || start > end)
		return (-1);
	arrayPrint(array, start, end);
	half = start + (end - 1) / 2;
	if (start == end)
		return (*(array + half) == value ? (int)half : -1);
	if (array[half] == value)
		return (half);
	else if (array[half] > value)
		return (bSearch(array, start, half - 1, value));
	else
		return (bSearch(array, half + 1, end, value));
}

/**
  * arrayPrint - print the current array
  * @array: array
  * @start: array right
  * @end: array end
  * Return: void
  */
void arrayPrint(int *array, size_t start, size_t end)
{
	size_t x;

	if (array)
	{
		printf("Searching in array: ");
		for (x = start; x < start + (end - start + 1); x++)
			printf("%d%s", *(array + x), x < start + (end - start) ? ", " : "\n");
	}
}
