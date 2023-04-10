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
	int i;
	int sum = 0;
	int a = 1;

	/* check if any arguments passed */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (a < argc)
	{
		for (i = 0; argv[a][i] != '\0'; i++)
		{
			/* checking if it's a digit or not */
			if (!(isdigit(argv[a][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		/*  calculating the sum */
		sum += atoi(argv[a]);
		a++;
	}
	/* printing the sum */
	printf("%d\n", sum);

	return (0);
}
