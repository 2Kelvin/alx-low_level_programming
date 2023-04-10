#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - add positive number arguments
  * @argc: argument count
  * @argv: arguments
  * Return: 0 for success, 1 for error
  */

int main(int argc, char *argv[])
{
	/* initializing variables loop index & sum */
	int i, sum = 0;

	/* checking if there are any arguments passed to program */
	if (argc == 1)
		/* print 0 if no args have been passed */
		printf("0\n");
	else
	{
		/* looping thro arguments */
		/* starting from 1 to skip the program argument at argv[0] */
		for (i = 1; i < argc; i++)
		{
			/* checking if we are at the end of the string */
			if (*argv[i] != '\0')
			{
				/* checking if the argument is a number */
				if (isdigit(*argv[i]) != 0)
					/* if it's a number, convert from string to int */
					/* then do the sum */
					sum += atoi(argv[i]);
				else
				{
					/* if it's not a number, print error */
					/* and return (1) */
					printf("Error\n");
					return (1);
				}
			}
		}
		/* print the sum if code is successful */
		printf("%d\n", sum);
	}

	return (0);
}
