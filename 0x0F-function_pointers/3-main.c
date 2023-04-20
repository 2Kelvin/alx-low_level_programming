#include "3-calc.h"

/**
  * main - takes in arguments
  * @argc: argument count
  * @argv: arguments
  * Return: 0 (for success)
  */

int main(int argc, char *argv[])
{
	/* argument at index 1 in argv is the first number */
	int num1 = atoi(argv[1]);
	/* argument at index 3 in argv is the second number */
	int num2 = atoi(argv[3]);
	int (*selFun)(int, int);
	char x;
	int answer;

	/* checking if enough arguments passed in */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* get the appropriate function using the operator argument */
	/* passed at index 2 of argv */
	selFun = get_op_func(argv[2]);
	/* if operator returns NULL/ no function print error & exit */
	if (selFun == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	x = *argv[2];
	/* if user tries to divide or modulo by 0, print error & exit(100) */
	/* checking if the user in the first place input second argument as 0 */
	if (((x == '%') || (x == '/')) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	answer = selFun(num1, num2);
	printf("%d\n", answer);
	return (0);
}
