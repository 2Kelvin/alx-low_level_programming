/**
  * _strspn - get the length of a prefix string
  * @s: string
  * @accept: prefix substring
  * Return: number of bytes
  */

unsigned int _strspn(char *s, char *accept)
{
	int a = 0;
	int b = 0;
	char *newS;
	char *newAccept;
	unsigned int prefixLen;

	newS = s;
	newAccept = accept;

	while (newS != '\0')
	{
		while (newAccept != '\0')
		{
			if (newAccept[b] == newS[a])
			{
				prefixLen++;
				break;
			}
			b++;
		}

		if (s[a] != accept[b])
			break;
		a++;
	}

	return (prefixLen);
}
