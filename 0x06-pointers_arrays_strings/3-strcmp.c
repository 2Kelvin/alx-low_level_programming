/**
  * _strcmp - compare two strings
  * @s1: string one
  * @s2: string two
  * Return: 0, >1 or <1
  */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
