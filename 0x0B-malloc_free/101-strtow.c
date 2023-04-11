#include <stdlib.h>

/**
  * strtow - splits a string into words
  * @str: string to split
  * Return: pointer words (success), NULL (error)
  */

char **strtow(char *str)
{
	char *wordsArr;
	int strLength = 0;

	/* checking if the string passed in is NULL or empty */
	if (str == NULL || str == "")
		return (NULL);
	/* calculating string length */
	while (str[strLength] != '\0')
		strLength++;
	/* allocating memory */
	wordsArr = malloc(sizeof(char) * strLength);
	/* checking if malloc wasn't successful */
	if (wordsArr == NULL)
		return (NULL);
