/**
  * _memcpy - copy n times of a data from src to dest
  * @dest: destination string parameter
  * @src: source parameter string
  * @n: data count parameter
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned counter;

	for (counter = 0; counter < n; counter++)
		dest[counter] = src[counter];

	return (0);
}
