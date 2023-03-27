/**
  * _strlen(char *s) - returns the length of a string
  * @s: pointer
  * Return: the length of the string
  */

int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; i < sizeof(*s); i++)
	{
		length++;
	}
	return (length);
}
