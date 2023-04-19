#include "function_pointers.h"

/**
  * int_index - search for an element int in an int array
  * @array: array arg
  * @size: array length
  * @cmp: function pointer
  * Return: index of first instance of element in array
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/* checking if an array & function pointer */
	/* have been passed in */
	if (cmp && array)
	{
		/* looping thro array searching for element */
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	/* if not passed in, return -1 */
	return (-1);
}
