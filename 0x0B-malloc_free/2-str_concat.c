#include <stdlib.h>

/**
  * str_concat - concatenate 2 strings into one
  * @s1: string one
  * @s2: string two
  * Return: concatenated string (success), NULL (error)
  */

char *str_concat(char *s1, char *s2)
{
	char *concStr;
	unsigned int i = 0, j = 0;
	unsigned int totalLen, s1Len = 0, s2Len = 0;

	/* calculating s1 length */
	while (s1[s1Len] != '\0')
		s1Len++;
	/* calculating s2L length */
	while (s2[s2Len])
		s2Len++;
	totalLen = s1Len + s2Len;

	/* allocating memory for concStr */
	/* +1 is for '\0' */
	concStr = malloc(sizeof(char) * (totalLen + 1));
	/* checking if memory was allocated successfully */
	if (concStr == NULL)
		return (NULL);

	/* copying s1 to concStr */
	if (s1)
	{
		while (i < s1Len)
		{
			concStr[i] = s1[i];
			i++;
		}
	}
	else

		s1 = "";
	/* copying s2 to concStr */
	if (s2)
	{
		while (i < totalLen)
		{
			concStr[i] = s2[j];
			i++;
			j++;
		}
	}
	else
		s2 = "";
	/* adding null terminator at the end of concStr */
	concStr[totalLen] = '\0';

	return (concStr);
}
