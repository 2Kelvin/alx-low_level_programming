#include <stdio.h>
/**
  * main - first 98 Fibonacci numbers
  * Return: 0
  */
int main(void)
{
	int count;
	int f = 1;
	int s = 2;
	int n = f + s;

	printf("%i, ", f);
	printf("%i, ", s);
	while (count <= 98)
	{
		if (count == 98)
			printf("%i\n", n);
		else
			printf("%i ", n);
		f = s;
		s = n;
		n = f + s;
		count++;
	}
	return (0);
}
