#include "main.h"
#include <stdio.h>

/**
  * print_buffer - prints a buffer
  * @b: pointer parameter
  * @size: size of buffer by *b
  * Return: void
  */

void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; b[i] != '\0'; i++)
	{
		size = sizeof(b[i]);
		if (size > 0)
		{
			printf("%x",size);
		}
		else
			printf("\n");
}
