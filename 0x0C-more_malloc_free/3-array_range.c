#include <stdlib.h>

/**
  * array_range - create array of ints min to max
  * @min: minimum int
  * @max: maximum int
  * Return: array containing ints
  */

int *array_range(int min, int max)
{
	int *minMAxArr;
	int i = 0;
	int arrLen = max - min;

	/* allocating memory for the array */
	/* +1 is for '\0' */
	minMaxArr = malloc(sizeof(int) * (arrLen + 1));
	/* checking if malloc was successful */
	if (minMaxArr == NULL)
		return (NULL);
	/* if min int is smaller than max int */
	if (min < max)
	{
		/* insert values into the array */
		while (min <= max)
		{
			minMaxArr[i] = min;
			min++;
			i++;
		}
	}
	else
		/* return NULL if min > max */
		return (NULL);
	return (minMaxArr);
}
