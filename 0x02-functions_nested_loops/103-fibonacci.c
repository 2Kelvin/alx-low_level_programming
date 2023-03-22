#include <stdio.h>
/**
  * main - print sum of Fibonacci even numbers
  * Return: 0
  */
int main(void)
{
	long int numCount = 3;
	long int firstNum = 1;
	long int secondNum = 2;
	long int nextNum = firstNum + secondNum;
	long int evenSum = 0;

	printf("%lu, ", firstNum);
	printf("%lu, ", secondNum);
	while (numCount <= 4000000)
	{
		if (firstNum % 2 == 0)
			evenSum += firstNum;
		firstNum = secondNum;
		secondNum = nextNum;
		nextNum = firstNum + secondNum;
		numCount++;
	}
	printf("%lu\n", evenSum);
	return (0);
}
