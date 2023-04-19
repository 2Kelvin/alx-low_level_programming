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

	/* if array is not 0 continue */
	if (size > 0)
	{
		/* if function pointer & array are not null continue */
		if (cmp != NULL && array != NULL)
		{
			/* looping thro array searching for element */
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]) != 0)
					return (i);
			}
		}
	}
	/* otherwise, return -1 for no match */
	return (-1);
}
