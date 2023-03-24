#include <stdio.h>
#include "main.h"

/**
* fizzBuzz - rename multiples of 3 and 5
* Return: void
*/

void fizzBuzz(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 = 0) && (n % 5 = 0))
			printf("FizzBuzz ");
		else if (n % 3 = 0)
			printf("Fizz ");
		else if (n % 5 = 0)
			printf("Buzz ");
		else
			printf("%d ", n);
	}
	_putchar('\n');
}
