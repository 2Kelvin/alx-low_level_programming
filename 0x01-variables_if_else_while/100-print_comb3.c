#include <stdio.h>
/**
  * main - print double combo of numbers
  * Return: 0
  */
int main(void)
{
	int i, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (k = '0'; k <= '9'; k++)
		{
			if (i != k && i < k)
			{
				putchar(i);
				putchar(k);
				if (i != '8' && k != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
