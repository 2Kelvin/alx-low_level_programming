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
	unsigned int s1Len = 0, s2Len = 0;

	while (s1 && s1[s1Len] != '\0')
		s1Len++;
	while (s2 && s2[s2Len] != '\0')
		s2Len++;
	if (n >= s2Len)
		concatStr = malloc(sizeof(char) * (s1Len + s2Len + 1));
	else if (n < s2Len)
		concatStr = malloc(sizeof(char) * (s1Len + n + 1));
	if (concatStr == NULL)
		return (NULL);
	while (i < s1Len)
	{
		concatStr[i] = s1[i];
		i++;
	}
	while (n >= s2Len && i < (s1Len + s2Len))
		concatStr[i++] = s2[j++];
	while (n < s2Len && i < (s1Len + n))
		concatStr[i++] = s2[j++];
	concatStr[i] = '\0';
	return (concatStr);
}
