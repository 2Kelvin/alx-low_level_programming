/**
  * _pow_recursion - return x to the power of y
  * @x: base parameter number
  * @y: power number
  * Return: int result of x to the power of y
  */

int _pow_recursion(int x, int y)
{
	/* check if y < 0 */
	if (y < 0)
		return (-1);
	/* if y == 0, multiply x by 1 */
	else if (y == 0)
		return (1);
	/* calculate the power using recursion */
	else
		return (x * (_pow_recursion(x, (y - 1))));
}
