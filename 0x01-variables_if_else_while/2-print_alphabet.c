#include <stdio.h>
/**
  * main - print alphabetical letters
  *Return: 0
  */
int main(void)
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
		putchar('\n');
	}
	return (0);
}
