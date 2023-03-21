#include "main.h"
/**
  * _isalpha - check if character is an alphabetical letter
  * @c: int argument
  * Return: 0
  */
int _isalpha(int c)
{
	int i;

	if (i >= 'a' && i <= 'z')
		return (1);
	else if (i >= 'A' && i <= 'Z')
		return (1);
	else
		return (0);
}
