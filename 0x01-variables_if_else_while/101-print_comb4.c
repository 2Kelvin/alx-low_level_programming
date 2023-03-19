#include <stdio.h>
/**
  * main - print three number combo
  * Return: 0
  */
int main(void)
{
	int a, b, c;

	for (a = '0'; a <= '7'; a++)
	{
		for (b = a + 1; b <= '9'; b++)
		{
			for (c = b + 1; c <= '9'; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a == '7' && b == '8' && c == '9')
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
