#include <stdlib.h>

/**
  * create_array - creates an array of chars
  * @size: number of times to print char c
  * @c: char to print
  * Return: pointer array or NULL
  */

char *create_array(unsigned int size, char c)
{
	/* initializing variables */
	char *pointerStr;
	unsigned int i;

	/* checking if size is 0 */
	/* if it is, returning (NULL) */
	if (size == 0)
		return (NULL);

	/* allocating memory space for pointerStr using malloc() */
	pointerStr = malloc(size * sizeof(char));

	if (pointerStr == NULL)
		return (0);

	/* filling pointerStr with char c */
	while (i < size)
	{
		pointerStr[i] = c;
		i++;
	}
	/* adding a null pointer at the end of the string */
	pointerStr[i] = '\0';

	/* returning the pointer string */
	return (pointerStr);
}
