#include "main.h"
/**
  * main - print 23:59
  * Return: void
  */
void jack_bauer(void)
{
	int h;
	int m;

	for (h = '0'; h <= '23'; h++)
	{
		for (m = '0'; m <= '60'; m++)
		{
			if (h = '24' && m == '59')
				break;
			else 
			{
				_putchar(h);
				_putchar(':');
				_putchar(m);
			}
		}
	}
	_putchar('\n');
}
