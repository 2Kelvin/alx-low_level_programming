#include <stdlib.h>

/**
  * argstostr - concat string from arguments
  * @ac: args count
  * @av: args
  * Return: concat string (success), NULL (error)
  */

char *argstostr(int ac, char **av)
{
	char *concatArgs;
	int i, l, a, b = 0, charLen = 0;

	/* check ac & av for NULL */
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i != *av[0]; i++)
	{
		for (l = 0; l != '\0'; l++)
			charLen++;
		charLen += charLen;
	}
	concatArgs = malloc(sizeof(char) * charLen);
	if (concatArgs == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		concatArgs[b] = *av[a] + '\n';
		b++;
	}

	return (concatArgs);
}
