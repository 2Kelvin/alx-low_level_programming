/**
  * factorial - return the factorial of any number
  * @n: argument number passed in
  * Return: factorial result int
  */

int factorial(int n)
{
	/* if the number passed is less than 0, return -1 for error */
	if (n < 0)
		return (-1);
	/* the factorial of 0 is always 1 */
	else if (n == 0)
		return (1);
	/* calculate the factorial of any other number in recursion */
	else
		return (n * (factorial(n - 1)));
}
