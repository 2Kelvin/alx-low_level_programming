#include "3-calc.h"
/**
  * op_add - add a & b
  * @a: int 1
  * @b: int 2
  * Return: sum
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtract b from a
  * @a: int 1
  * @b: int 2
  * Return: difference
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiply a & b
  * @a: int 1
  * @b: int 2
  * Return: product
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divide b from a
  * @a: int 1
  * @b: int 2
  * Return: division result
  */
int op_div(int a, int b)
{
	return (a / b);
}

/**
  * op_mod - get the remainder of a divided by b
  * @a: int 1
  * @b: int 2
  * Return: remainder
  */
int op_mod(int a, int b)
{
	return (a % b);
}
