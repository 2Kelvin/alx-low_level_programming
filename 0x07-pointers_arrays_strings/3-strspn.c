/**
  * _strspn - get the length of a prefix string
  * @s: string
  * @accept: prefix substring
  * Return: number of bytes
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int u = 0;
	unsigned int v = 0;
	unsigned int prefixLen;
	char space = ' ';

	while (accept[u])
	{
		while (s[v] != space)
		{
			if (accept[u] == s[v])
				prefixLen++;
			v++;
		}
		u++;
	}

	return (prefixLen);
}
