#include <stdlib.h>

/**
  * _strdup - duplicate a string
  * @str: strinf to duplicate from
  * Return: duplicated string (success) or NULL (error)
  */

char *_strdup(char *str)
{
	char *dupStr;
	unsigned int i, strLength = 0;

	/* checking if str is NULL */
	if (str == NULL)
		return (NULL);

	/* calculating the length of the string */
	while (str[strLength] != '\0')
		strLength++;

	/* allocating memory space for duplicate string */
	/* adding an extra space for the null terminator at the end of string */
	dupStr = malloc(sizeof(char) * (strLength + 1);

	/* checking if memory allocation to dupStr was successful */
	if (dupStr == NULL)
		return (NULL);

	/* coping str to dupStr */
	for (i = 0; i < strLength; i++)
		dupStr[i] = str[i];

	/* adding a null terminator at the end of dupStr */
	dupStr[strLength] = '\0';

	return (dupStr);
}
