/**
  * _strncpy - copy string src to dest
  * @dest: destination string pointer parameter
  * @src: source string pointer parameter
  * @n: characters copied parameter
  * Return: dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
