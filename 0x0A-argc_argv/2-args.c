#include <stdio.h>

/**
  * main - print all arguments
  * @argc: argument count
  * @argv: argument strings
  * Return: 0 for success
  */

int main(int argc, char *argv[])
{
	/* initializing index variable i */
	/* will be used to loop thro arguments array */
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
