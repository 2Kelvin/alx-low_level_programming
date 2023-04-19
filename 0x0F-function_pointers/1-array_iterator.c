#include "function_pointers.h"

/**
  * array_iterator - passes each array element to function pointer action
  * @array: array arg
  * @size: array length
  * @action: function pointer
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	/* initializing array index */
	/* of type same as that of size_t */
	long unsigned int i;

	/* accessing each array element & passing it to action function */
	for (i = 0; i < size; i++)
		action(array[i]);
}
