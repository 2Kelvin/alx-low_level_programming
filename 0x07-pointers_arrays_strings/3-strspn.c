/**
  * _strspn - get the length of a prefix string
  * @s: string
  * @accept: prefix substring
  * Return: number of bytes
  */

unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	int numBytes = 0;
	int bfl;

	for (a = 0; s[a] != '\0'; a++)
	{
		bfl = 0;

		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				numBytes++;
				bfl = 1;
			}
		}

		if (bfl == 0)
			return (numBytes);
	}

	return (0);
}
