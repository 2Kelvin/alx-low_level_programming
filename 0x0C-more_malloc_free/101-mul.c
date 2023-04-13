#include <stdlib.h>
#include <stdio.h>
/**
  * _isdigit - checks if parameter c is a digit
  * @c: parameter passed
  * Return: 1 (true), 0 (not a digit)
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/**
  * main - multiplies 2 arguments
  * @argc: args count
  * @argv: arguments passed
  * Return: 0 (success)
  */
int main(int argc, char *argv[])
{
	int num1, num2, mulResult = 0;
	if (argc != 3 || _isdigit(num1) == 0 || _isdigit(num2) == 0)
	{
		printf("Error\n");
		exit(98);
	}
	mulResult = num1 * num2;
	printf("%d\n", mulResult);
}
