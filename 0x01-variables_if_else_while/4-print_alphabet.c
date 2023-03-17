#include <stdio.h>
/**
  * main - ommit letters q and e
  *Return: 0
  */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if ((i == 'q') || (i == 'e'))
			putchar(i);
		else
			continue;
	putchar('\n');
	return (0);
}
