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
	char *realPtr;
	int i;

	if (new_size > old_size)
	{
		realPtr = malloc(new_size);
		for (i = 0; i < old_size; i++)
			ptr[i] = realPtr[i];
	}
	else if (new_size == old_size)
		return (ptr);
	else if (ptr == NULL)
		realPtr = malloc(new_size);
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	return (realPtr);
}
