#include <stdio.h>
#include <stdlib.h>

/**
  * main - print the result of multipication of two arguments
  * @argc: argument count
  * @argv: arguments
  * Return: 0 for success 1 for error
  */

int main(int argc, char *argv[])
{
	/* initializing variables */
	int no1, no2, result = 0;

	/* checking if the program has received 2 arguments */
	/* argc should be 3 for a successful program */
	/* 1 arg for the program, 2 for the numbers */
	if (args != 3)
	{
		printf("Error\n");
		return (1);
	}
	/* if argc is 3, do the multiplication & print it */
	else
	{
		/* atoi converts char to int */
		no1 = atoi(argv[1]);
		no2 = atoi(argv[2]);
		result = no1 * no2;
		printf("%d\n", result);
	}

	return (0);
}
