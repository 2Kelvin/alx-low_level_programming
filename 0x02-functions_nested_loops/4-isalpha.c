#include "main.h"
/**
  * main - check if character is an alphabetical letter
  * Return: 0
  */
int _isalpha(int c)
{
	int asciiLetter = (c + '0');

	if ((asciiLetter >= 65 && asciiLetter <= 90) || (asciiLetter >= 97 && asciiLetter <= 122))
		return (1);
	else
		return (0);

int main(void)
{
	return (0);
}
