/**
  * _strncat - concatenates two strings limited by n
  * @dest: string pointer 1
  * @src: string pointer 2
  * @n: limits characters added
  * Return: @dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int l = 0;
	int destLength = 0;

	while (dest[i] != '\0')
	{
		destLength++;
		i++;
	}
	while ((src[l] != '\0') && (l < n))
	{
		dest[destLength++] = src[l];
		l++;
	}
	dest[destLength] = '\0';

	return (dest);
}
