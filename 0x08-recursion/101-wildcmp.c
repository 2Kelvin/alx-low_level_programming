/**
  * wildcmp - compare 2 strings
  * @s1: string param 1
  * @s2: string param 2
  * Return: 1 (identical) 0 (not identical)
  */

int wildcmp(char *s1, char *s2)
{
	/* if both strings are empty, they're identical */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	/* checking * copy operator */
	else if (*s1 == '\0' && *s2 == '*' && *(s2 + 1) != '\0')
		return (0);
	/* compare with recursion */
	else if (*s1 == *s2)
		return (wildcmp((s1  + 1), (s2 + 1)));
	else if (*s2 == '*')
		return (wildcmp(s1, (s2 + 1)) || wildcmp((s1 + 1), s2));
	else
		return (0);
}
