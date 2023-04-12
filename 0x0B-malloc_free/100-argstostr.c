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
	int i = 0, x = 0, y = 0, len = 0;

	/* check ac & av for NULL */
	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		while (av[i][x])
		{
			len++;
			x++;
		}
		len++;
		i++;
	}
	concatArgs = malloc((sizeof(char) * len) + 1);
	if (concatArgs == NULL)
		return (NULL);
	while (i < ac)
	{
		while (av[i][x])
		{
			concatArgs[y] = av[i][x];
			x++;
			y++;
		}
		concatArgs[y] = '\n';
		y++;
		i++;
	}
	concatArgs[y] = '\0';

	return (concatArgs);
}
