#include <stdio.h>
#include <stdlib.h>

/**
  * main - calculate min coin number for change
  * @argc: argument count
  * @argv: arguments
  * Return: 0 for success, 1 for error
  */

int main (int argc, char *argv[])
{
	int coins, cents, rem;
	int quarters, dimes, nickles, twos, pennies;

	/* checking cents argument has been passed */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	/* checking if negative value has been passed in */
	else if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}
	else
		/* converting the cents at argv[1] from string to int */
		cents = atoi(argv[1]);

	quarters = cents / 25;
	rem = cents % 25;
	dimes = rem / 10;
	rem %= 10;
	nickles = rem / 5;
	rem %= 5;
	twos = rem / 2;
	rem %= 2;
	pennies = rem / 1;

	coins = dimes + quarters + nickles + twos + pennies;

	printf("%d\n", coins);

	return (0);
}
