#include <stdlib.h>

/**
  * array_range - create array of ints min to max
  * @min: minimum int
  * @max: maximum int
  * Return: array containing ints
  */

int *array_range(int min, int max)
{
	int *minMaxArr;
	int i = 0;
	int arrLen = max - min + 1;

	/* checking min is greater than max */
	if (min > max)
		return (NULL);
	/* allocating memory for the array */
	minMaxArr = malloc(sizeof(int) * arrLen);
	/* checking if malloc was successful */
	if (minMaxArr == NULL)
		return (NULL);
	/* insert values into the array */
	while (min <= max)
	{
		minMaxArr[i] = min;
		min++;
		i++;
	}
	return (minMaxArr);
}
