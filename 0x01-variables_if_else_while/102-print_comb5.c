#include <stdio.h>
/**
  * main - print possible double combinations of numbers
  * Return: 0
  */
int main(void)
{
	int x, z;

	for (x = 0; x <= 99; x++)
	{
		for (z = x + 1; z <= 99; z++)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar(' ');
			putchar((z / 10) + '0');
			putchar((z % 10) + '0');
			if (x != 98 || z != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
