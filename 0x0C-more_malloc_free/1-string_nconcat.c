#include <stdlib.h>
/**
  * string_nconcat - concatenates 2 strings, s2 n times
  * @s1: strinf 1
  * @s2: string 2
  * @n: bytes of s2 to use
  * Return: concatenated string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatStr;
	unsigned int i = 0, j = 0;
	unsigned int totalLen, s1Len = 0, s2Len = 0;

	while (s1 && s1[s1Len] != '\0')
		s1Len++;
	while (s2 && s2[s2Len] != '\0')
		s2Len++;
	if (n >= s2Len)
		totalLen = s1Len + s2Len;
	else
		totalLen = s1Len + n;
	concatStr = (char *) malloc(sizeof(char) * (totalLen + 1));
	if (concatStr == NULL)
		return (NULL);
	if (s1)
	{
		while (i < s1Len)
		{
			concatStr[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		if (n >= s2Len)
		{
			totalLen = s1Len + s2Len;
			while (i < totalLen)
			{
				concatStr[i] = s2[j];
				i++;
				j++;
			}
		}
		else if (n < s2Len)
		{
			totalLen = s1Len + n;
			while (i < totalLen)
			{
				concatStr[i] = s2[j];
				i++;
				j++;
			}
		}
	}
	concatStr[totalLen] = '\0';
	return (concatStr);
}
