#include <stdio.h>
/**
  * main - print single digit combinations
  * Return: 0
  */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '9')
		{
			putchar(i);
		}
		else
		{
			putchar(i);
			putchar(', ');
		}
	}
	putchar('\n');
	return (0);
}
