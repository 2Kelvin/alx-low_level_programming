#include <stdio.h>
/**
  * main - print first 50 numbers in the Fibonacci sequence starting with 1 & 2
  * Return: 0
  */
int main(void)
{
	int numberCount = 3;
	long int firstNo = 1;
	long int secondNo = 2;
	long int nextNo = firstNo + secondNo;

	printf("%lu, ", firstNo);
	printf("%lu, ", secondNo);
	while (numberCount <= 50)
	{
		if (numberCount == 50)
			printf("%lu\n", nextNo);
		else
			printf("%lu, ", nextNo);
		firstNo = secondNo;
		secondNo = nextNo;
		nextNo = firstNo + secondNo;
		numberCount++;
	}
	return (0);
}
