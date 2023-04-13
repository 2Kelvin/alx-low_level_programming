#include <stdlib.h>

/**
  * _memset - fill memory with 0
  * @s: pointer
  * @b: character to fill in (0)
  * @n: how many times
  * Return: pointer
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

/**
  * _calloc - allocates memory for an array of nmemb items each size bytes
  * @nmemb: number of items in array
  * @size: bytes of each nmemb
  * Return: nArr
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *nArr;

	/*  checking if nmemb or size is 0 */
	if (nmemb == 0 || size == 0)
		return (NULL);
	/* allocating memory for nArr */
	nArr = malloc(nmemb * size);
	/* checking if memory was allocated to nArr successfully */
	if (nArr == NULL)
		return (NULL);
	/* filling each nArr item (nmemb) with 0 */
	_memset(nArr, 0, (nmemb * size));
	return (nArr);
}
