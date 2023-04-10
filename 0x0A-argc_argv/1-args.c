#include <stdio.h>

/**
  * main - print argument count
  * @argc: arguments count
  * @argv: arguments
  * Return: 0 for success
  */

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	/* printing the number of arguments passed to main */
	/* which basically means print argc - the program argument */
	printf("%d\n", (argc - 1));

	return (0);
}
