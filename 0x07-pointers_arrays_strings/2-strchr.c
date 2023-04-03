/**
  * _strchr - finds char c in string s
  * @s: string parameter
  * @c: character to find parameter
  * Return: first char occurence or NULL
  */

char *_strchr(char *s, char c)
{
	int f;

	for (f = 0; s[f] >= '\0'; f++)
	{
		if (s[f] == c)
			return (&s[f]);
	}

	return (0);
}
