#include "main.h"

/**
 * *_strcpy - copy the string value in src pointer
 * @dest: char pointer 1
 * @src: char pointer 2
 * Return: dest pointer
 */

char *_strcpy(char *dest, char *src)
{
	int c, i;

	c = 0;

	while (src[c] != '\0')
		c++;
	for (i = 0; i <= c; i++)
		dest[i] = src[i];
	return (dest);
}
