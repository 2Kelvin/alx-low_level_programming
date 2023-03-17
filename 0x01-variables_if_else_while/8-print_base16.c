#include <stdio.h>
/**
  * main - print numbers in the base of 16
  * Return: 0
  */
int main(void)
{
	int i;
	char l;

	for (i = 0; i <= 9; i++)
		putchar(i);

	for (l = 'a'; l <= 'f'; l++)
		putchar(l);

	putchar('\n');
	return (0);
}
