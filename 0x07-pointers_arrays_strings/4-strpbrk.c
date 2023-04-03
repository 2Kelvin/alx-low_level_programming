/**
  * _strpbrk - search for any set of bytes in a string
  * @s: parameter string 1
  * @accept: parameter string 2
  * Return: s
  */

char *_strpbrk(char *s, char *accept)
{
	int g = 0;

	while (*s != '\0')
	{
		while (accept[g] != '\0')
		{
			if (*s == accept[g])
				return (s);
			g++;
		}
		s++;
	}

	return (0);
}
