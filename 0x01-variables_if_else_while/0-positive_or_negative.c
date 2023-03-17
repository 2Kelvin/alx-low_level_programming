#include <stdio.h>

/**
 *main - uses an if statement to determine if n is positve or negative
 *Return: 0
 */

int main(void)
{
	int n;
	if (n > 0) {
		printf("%d, if the number is greater than 0: is positive\n", n);
	} else if (n == 0) {
		printf("%d, if the number is 0: is zero\n", n);
	} else {
		printf("%d, if the number is less than 0: is negative\n", n);
	}
	return 0;
}
