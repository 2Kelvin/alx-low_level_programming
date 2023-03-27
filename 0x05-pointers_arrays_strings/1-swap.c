#include "main.h"

/**
  * swap_int - swap parameters a & b values
  * @a: first pointer
  * @b: second pointer
  * Return: void
  */

void swap_int(int *a, int *b)
{
	int firstA = *a;
	int firstB = *b;

	*a = firstB;
	*b = firstA;
}
