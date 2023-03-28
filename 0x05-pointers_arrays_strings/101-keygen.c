#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

/**
  * passwordGenerator - generates random passwords based on time
  * @n - passwoed characters parameter
  * Return: void
  */

void passwordGenerator(int n)
{
	int counter;
	int makeRandom = 0;

	srand((unsigned int)(time(NULL)));

	char numbers[] = "0123456789";
	char smallLetters[] = "abcdefghijklmnopqrstuvwxyz";
	char capitalLetters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char symbols[] = "!@#$^&*?";
	char password[n];

	makeRandom = rand() % 4;

	for (counter = 0; counter < n; counter++)
	{
		if (makeRandom == 1)
		{
			password[counter] = numbers[rand() % 10];
			makeRandom = rand() % 4;
			printf("%c", password[counter]);
		}
		else if (makeRandom == 2)
		{
			password[counter] = symbols[rand() % 8];
			makeRandom = rand() % 4;
			printf("%c", password[counter]);
		}
		else if (makeRandom == 3)
		{
			password[counter] = capitalLetters[rand() % 26];
			makeRandom = rand() % 4;
			printf("%c", password[counter]);
		}
		else
		{
			password[counter] = smallLetters[rand() % 26];
			makeRandom = rand() % 4;
			pirntf("%c", password[counter]);
		}
	}
}

/**
  * main - calls passwordGenerator to create a random password
  * Return: 0 for success
  */
int main(void)
{
	passwordGenerator(8);

	return (0);
}
