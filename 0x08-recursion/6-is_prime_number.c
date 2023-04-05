/**
  * recursivePrime - actual recursion
  * @num: argument number passed in
  * @g: argument two
  * Return: int
  */

int recursivePrime(int num, int g)
{
	if (g == 1)
		return (1);
	else if ((num % g == 0) && (g > 0))
		return (0);
	else
		return (recursivePrime(num, (g - 1)));
}

/**
  * is_prime_number - finds prime number
  * @n: argument number passed in
  * Return: 1 if prime, 0 if not
  */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (recursivePrime(n, (n - 1)));
}
