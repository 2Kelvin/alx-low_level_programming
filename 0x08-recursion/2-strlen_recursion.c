/**
  * _strlen_recursion - calculates the length of a string using recursion
  * @s: string passed in
  * Return: string length in int
  */

int _strlen_recursion(char *s)
{
	/* making sure '\0' is not counted */
	/* and checking if the string is empty */
	/* or if we're at the end of the string */

	if (*s == '\0')
		return (0);
	else
		return (1 + (_strlen_recursion(s + 1)));
}
