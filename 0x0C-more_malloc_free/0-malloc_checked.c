#include <stdlib.h>

/**
  * malloc_checked - create & check if malloc succeeded
  * @b: memory size
  * Return: memory address
  */

void *malloc_checked(unsigned int b)
{
	/* a malloc address is void till initialized with another data-type */
	void malAddress;

	/* the memory space has already been calculated & stored in b */
	malAddress = malloc(b);

	/* checking creating an address was successful */
	if (malAddress == NULL)
		exit(98);

	return (malAddress);
}
