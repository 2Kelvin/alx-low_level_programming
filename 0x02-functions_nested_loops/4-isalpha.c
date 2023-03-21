#include "main.h"
/**
  * _isalpha - check if character is an alphabetical letter
  * @c: int argument
  * Return: 0
  */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
