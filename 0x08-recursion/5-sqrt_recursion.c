/**
  * recursiveSqrt - does the actual recurssion
  * @num: number to find square root of
  * @g: parameter 2
  * Return: int
  */

int recursiveSqrt(int num, int g)
{
	if ((g * g) > n)
		return (-1);
	else if ((g * g) == n)
		return (g);
	else
		return (recursiveSqrt(num, (g + 1)));
}

/**
  * _sqrt_recursion - find square root of a number recursively
  * @n: number to find the square root of
  * Return: square root of n
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (recursiveSqrt(n, 0));
}
