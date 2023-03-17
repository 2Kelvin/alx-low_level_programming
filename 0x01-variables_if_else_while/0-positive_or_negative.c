#include <stdio.h>

/**
 *main - uses an if statement to determine if n is positve or negative
 *Return: 0
 */

int n;

int main(void)
{
	if (n > 0) {
		printf("%d, is positive\n", n);
	} else if (n == 0) {
		printf("%d, is zero\n", n);
	} else {
		printf("%d, less than 0: is negative\n", n);
	}
	return (0);
}
