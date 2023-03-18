#include <stdio.h>
/**
  * main - print single digit combinations
  * Return: 0
  */
int main(void)
{
	int i;

	for (i = '1'; i <= '9'; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	
	return (0);
}
