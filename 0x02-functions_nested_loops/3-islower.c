#include "main.h"
#include <ctype.h>
/**
  * main - check for lowercase characters
  * Return: 0
  */
int _islower(int c)
{
	asciiLetter = (c + '0');

	if ((isLower(asciiLetter) > 0))
		return (1);
	else
		return (0);

int main(void)
{
	_isLower();
	return (0);
}
