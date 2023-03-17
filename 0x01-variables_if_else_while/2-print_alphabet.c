#include <stdio.h>

/**
  *main - print each letter of the alphabet
  *Return: 0
  */

int main(void)
{
	char alphabets [] = "abcdefghijklmnopqrstuvwxyz";
	for (i = 0; i < 26; i++) {
		putchar("%c", tolower(alphabet[i]));
	}
	return (0);
}
