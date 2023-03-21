#include "main.h"
/**
  * _isalpha - check if character is an alphabetical letter
  * @c: int argument
  * Return: 0
  */
int _isalpha(int c)
{
	int asciiLetter = (c + '0');

	if ((asciiLetter >= 65 && asciiLetter <= 90) || (asciiLetter >= 97 && asciiLetter <= 122))
		return (1);
	else
		return (0);
}
