#include <stdio.h>

/**
  * main - print the name of the program
  * Retutn: 0 (Success)
  */

int main(int argc, char *argv[])
{
	/* initialize index to loop through argv[] arguments */
	int index;

	/* print the 1st argv argument */
	/* it should automatically be the program's name */
	printf("./%s", argv[0]);

	return (0);
}