/**
  * _strcat - concatenates two strings
  * @dest: string pointer 1
  * @src: string pointer 2
  * Return: @dest
  */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int l = 0;
	int destLength = 0;

	while (dest[i] != '\0')
	{
		destLength++;
		i++;
	}
	while (src[l] != '\0')
	{
		dest[destLength++] = src[l];
		l++;
	}
	dest[destLength] = '\0';

	return (dest);
}
