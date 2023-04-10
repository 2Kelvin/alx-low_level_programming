#include "main.h"
#include <stdio.h>

/**
  * main - print the name of the program
  * @argc: number of main's arguments
  * @argv: main's arguments
  * Return: 0 (Success)
  */

int main(int __attribute__ ((unused)) argc, char *argv[])
{
	/* initialize index to loop through argv[] arguments */
	int index;

	/* print the 1st argv argument */
	/* it should automatically be the program's name */
	printf("%s\n", argv[0]);

	return (0);
}
