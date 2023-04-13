#include <stdlib.h>

/**
  * _realloc - realloc() copycat
  * @ptr: pointer
  * @old_size: old memory space
  * @new_size: new memory space
  * Return: pointer
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *realPtr, *malPtr;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	/* new reallocated memory */
	realPtr = malloc(new_size);
	if (realPtr == NULL)
		return (NULL);
	malPtr = ptr;
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			realPtr[i] = malPtr[i];
	}
	else if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			realPtr[i] = malPtr[i];
	}

	free(ptr);
	return (realPtr);
}
