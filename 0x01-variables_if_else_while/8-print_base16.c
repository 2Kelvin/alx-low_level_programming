#include <stdio.h>
/**
  * main - print numbers in the base of 16
  * Return: 0
  */
int main(void)
{
	char n;
	char l;

	for (n = '0'; n <= '9'; n++)
		putchar(n);

	for (l = 'a'; l <= 'f'; l++)
		putchar(l);

	putchar('\n');
	return (0);
}
